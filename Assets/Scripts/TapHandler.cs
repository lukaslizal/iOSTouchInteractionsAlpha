using UnityEngine;
using System.Collections;
using TouchScript.Gestures;
using System;
using Random = UnityEngine.Random;

public class TapHandler : MonoBehaviour {

	private void OnEnable(){
		GetComponent<TapGesture>().Tapped += tappedHandler;
	}

	private void OnDisable(){
		GetComponent<TapGesture>().Tapped -= tappedHandler;
	}

	private void tappedHandler(object sender, EventArgs e) {
		//transform.Translate(new Vector3(-1,0,0));
		GetComponent<Renderer>().material.color = new Color(Random.value,Random.value,Random.value);
	}
}
