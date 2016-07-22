using UnityEngine;
using System.Collections;
using System;
using Random = UnityEngine.Random;
using TouchScript.Gestures;
using TouchScript.Hit;

public class TapSpawner : MonoBehaviour {

	public Transform CubePrefab;
	public Transform Container;
	public float Scale = 0.5f;

	private void OnEnable() {
		GetComponent<TapGesture>().Tapped += tappedHandler;
	}

	private void OnDisable() {
		GetComponent<TapGesture>().Tapped -= tappedHandler;
	}

	private void tappedHandler(object sender, EventArgs e) {
		var gesture = sender as TapGesture;
		ITouchHit hit;
		gesture.GetTargetHitResult(out hit);
		var hit3d = hit as ITouchHit3D;
		if (hit3d == null) return;
		
		Color color = new Color(Random.value, Random.value, Random.value);
		var cube = Instantiate(CubePrefab) as Transform;
		cube.parent = Container;
		cube.name = "Cube";
		cube.localScale = Vector3.one*Scale*cube.localScale.x;
		cube.position = hit3d.Point;
		cube.GetComponent<Renderer>().material.color = color;
	}
}
