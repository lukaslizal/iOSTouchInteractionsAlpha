using UnityEngine;
using System.Collections;

public class Tween : MonoBehaviour {
	private GameObject cylinder;
	private GameObject cube;
	private Vector3 position;

	// Use this for initialization
	void Start () {
		cylinder = GameObject.CreatePrimitive(PrimitiveType.Cylinder);
		cube = GameObject.CreatePrimitive(PrimitiveType.Cube);
		position = transform.position;
		cube.transform.position = new Vector3(0,0,0);
		LeanTween.moveLocalX(cylinder,3f,1f).setEase(LeanTweenType.linear);
		
		LeanTween.value(gameObject, cube.transform.position.x, cube.transform.position.x + 3f, 1f)
                        .setOnUpdate((float val) =>
                        {
                            position.x = val;
                        }).setEase(LeanTweenType.easeInOutCubic).setRepeat(0);
	}
	
	// Update is called once per frame
	void Update () {
		//LeanTween.moveX(gameObject,3f,1f).setEase(LeanTweenType.easeInBounce);
						
        cube.transform.position = position;
	}
}
