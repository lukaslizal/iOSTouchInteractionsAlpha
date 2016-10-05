using UnityEngine;
using System.Collections;

public class SplineDecorator : MonoBehaviour
{
    public int maxObjectCount;
    public float offset;
    public GameObject dotPrefab;
    public GameObject endPrefab;
    private BezierSpline spline;
    private GameObject[] dots;

    private void Start()
    {
        spline = (BezierSpline)GetComponent<BezierSpline>();
        dots = new GameObject[maxObjectCount];
        for (int i = 0; i < maxObjectCount; i++)
        {
            dots[i] = GameObject.Instantiate(dotPrefab);
            dots[i].transform.parent = this.transform;
            dots[i].GetComponent<Renderer>().enabled = false;
        }
        for (var i = 0; i < spline.arr[spline.arr.Length - 1] / offset; i++)
        {
            if (i < maxObjectCount)
            {
                var progress = i * offset;
                var t = spline.FindTAt(progress);
                Vector3 position = spline.GetPoint(t);
                dots[i].transform.localPosition = position;
                dots[i].transform.LookAt(position + spline.GetDirection(t));
                dots[i].GetComponent<Renderer>().enabled = true;
            }
        }

    }

    private void Update()
    {
        for (var i = 0; i < spline.arr[spline.arr.Length - 1] / offset; i++)
        {
            if (i < maxObjectCount)
            {
                var progress = i * offset;
                var t = spline.FindTAt(progress);
                Vector3 position = spline.GetPoint(t);
                dots[i].transform.localPosition = position;
                dots[i].transform.LookAt(position + spline.GetDirection(t));
                dots[i].GetComponent<Renderer>().enabled = true;
            }
        }

    }
}
