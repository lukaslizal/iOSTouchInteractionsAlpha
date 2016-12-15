using UnityEngine;
using System.Collections;

public class PlaceAssets : MonoBehaviour {

	public GameObject dotPrefab;
	public GameObject endPrefab;
	public GameObject snapPrefab;
	public int length;
	public int snapPoints;
	// Use this for initialization
	void Start () {
		for(int i = -length/2;i<length/2;i++)
		{
			var dot = (GameObject) Instantiate(dotPrefab,new Vector3(i*5f,0,0), Quaternion.identity);
			dot.transform.parent = gameObject.transform;
			dot.transform.localPosition = new Vector3(i*5f,0,0);
		}
		
		for(int i = -2; i<3;i++)
		{
			var dot = (GameObject) Instantiate(dotPrefab,new Vector3(0,0,0), Quaternion.identity);
			dot.transform.parent = gameObject.transform;
			dot.transform.localPosition = new Vector3(length/2*5f,0,i*5f);
		}

		for(int i = -6; i<0;i++)
		{
			var dot = (GameObject) Instantiate(dotPrefab,new Vector3(0,0,0), Quaternion.identity);
			dot.transform.parent = gameObject.transform;
			dot.transform.localPosition = new Vector3(-length/2*5f,0,i*5f);
		}

		// for(int i = -snapPoints/2;i<snapPoints/2;i++)
		// {
		// 	var snap = (GameObject) Instantiate(snapPrefab,new Vector3(i*(length/2)*5f,0,0), Quaternion.identity);
		// 	snap.transform.parent = gameObject.transform;
		// }

		var endLeftMiddle = (GameObject) Instantiate(endPrefab,new Vector3(0,0,0),Quaternion.identity);
		endLeftMiddle.transform.parent = gameObject.transform;
		endLeftMiddle.transform.localPosition = new Vector3(-length/2*5f, 0.1f,0f);
		endLeftMiddle.GetComponent<CollisionHandler>().xPlus = true;
		endLeftMiddle.GetComponent<CollisionHandler>().zMinus = true;

		var endRightMiddle = (GameObject) Instantiate(endPrefab,new Vector3(0,0,0),Quaternion.identity);
		endRightMiddle.transform.parent = gameObject.transform;
		endRightMiddle.transform.localPosition = new Vector3(length/2*5f, 0.1f,0f);
		endRightMiddle.GetComponent<CollisionHandler>().xMinus = true;
		endRightMiddle.GetComponent<CollisionHandler>().zPlus = true;
		endRightMiddle.GetComponent<CollisionHandler>().zMinus = true;

		var endRightTop = (GameObject) Instantiate(endPrefab,new Vector3(0,0,0),Quaternion.identity);
		endRightTop.transform.parent = gameObject.transform;
		endRightTop.transform.localPosition = new Vector3(length/2*5f, 0.1f,15f);
		endRightTop.GetComponent<CollisionHandler>().zMinus = true;

		var endRightBottom = (GameObject) Instantiate(endPrefab,new Vector3(0,0,0),Quaternion.identity);
		endRightBottom.transform.parent = gameObject.transform;
		endRightBottom.transform.localPosition = new Vector3(length/2*5f, 0.1f,-10f);
		endRightBottom.GetComponent<CollisionHandler>().zPlus = true;

		var endLeftBottom = (GameObject) Instantiate(endPrefab,new Vector3(0,0,0),Quaternion.identity);
		endLeftBottom.transform.parent = gameObject.transform;
		endLeftBottom.transform.localPosition = new Vector3(-length/2*5f, 0.1f,-30f);
		endLeftBottom.GetComponent<CollisionHandler>().zPlus = true;

		var endCenter = (GameObject) Instantiate(endPrefab,new Vector3(0,0,0),Quaternion.identity);
		endCenter.transform.parent = gameObject.transform;
		endCenter.transform.localPosition = new Vector3(0f, 0.1f,0f);
		endCenter.GetComponent<CollisionHandler>().xPlus = true;
		endCenter.GetComponent<CollisionHandler>().xMinus = true;
		endCenter.GetComponent<CollisionHandler>().xMinusNode = endLeftMiddle;
		endCenter.GetComponent<CollisionHandler>().xPlusNode = endRightMiddle;

		endRightMiddle.GetComponent<CollisionHandler>().xMinusNode = endCenter;
		endRightMiddle.GetComponent<CollisionHandler>().zPlusNode = endRightTop;
		endRightMiddle.GetComponent<CollisionHandler>().zMinusNode = endRightBottom;
		endRightTop.GetComponent<CollisionHandler>().zMinusNode = endRightMiddle;
		endRightBottom.GetComponent<CollisionHandler>().zPlusNode = endRightMiddle;


		endLeftMiddle.GetComponent<CollisionHandler>().xPlusNode = endCenter;
		endLeftMiddle.GetComponent<CollisionHandler>().zMinusNode = endLeftBottom;
		endLeftBottom.GetComponent<CollisionHandler>().zPlusNode = endLeftMiddle;
		
	}
}
