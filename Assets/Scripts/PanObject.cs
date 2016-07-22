using UnityEngine;
using System.Collections;
using TouchScript.Gestures;
using System;

public class PanObject : MonoBehaviour {

	private Quaternion targetRotation;
	
	private void Awake()
	{
		targetRotation = transform.localRotation;
	}
	
	private void OnEnable()
	{
		transform.FindChild("Button").GetComponent<TapGesture>().Tapped += tapStateChangeHandler;
	}
	
	private void OnDisable()
	{
		transform.FindChild("Button").GetComponent<TapGesture>().Tapped -= tapStateChangeHandler;
	}
	
	void Update ()
	{
		transform.localRotation = Quaternion.Lerp(transform.localRotation, targetRotation, .1f);
	}
	
	private void tapStateChangeHandler(object sender, EventArgs e)
	{
		targetRotation = Quaternion.Euler(0, 90, 0) * targetRotation;

	}
}
