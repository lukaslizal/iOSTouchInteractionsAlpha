using UnityEngine;

public class SplineWalker : MonoBehaviour {

	public BezierSpline spline;

	public float duration;
	public float speed;

	public bool lookForward;

	public SplineWalkerMode mode;
	[RangeAttribute(0,1000)]
	public float progress;
	public void Start()
	{
		SetProgress(0f);
	}
	private void Update ()
	{
		// progress += (Time.deltaTime / duration*speed);
		// progress %= spline.arr[spline.arr.Length-1];
		// var t = spline.FindTAt(progress);
		// Vector3 position = spline.GetPoint(t);
		// transform.localPosition = position+ new Vector3(0,0,-10);
		// if (lookForward) {
		// 	transform.up = spline.GetDirection(t);
		// 	transform.rotation = Quaternion.Euler (0, 0, transform.eulerAngles.z);
		// }
	}
	public void SetProgress(float p)
	{
		progress = Mathf.Repeat(p,spline.arr[spline.arr.Length-1]);
		var t = spline.FindTAt(progress);
		Vector3 position = spline.GetPoint(t);
		transform.localPosition = position+ new Vector3(0,0,-20);
		if (lookForward) {
			transform.up = spline.GetDirection(t);
			transform.rotation = Quaternion.Euler (0, 0, transform.eulerAngles.z);
		}
	}
}