using UnityEngine;
using System.Collections;

public class SplineDecorator : MonoBehaviour
{



    public BezierSpline spline;

    public float duration;
    public float speed;
    public bool lookForward;

    public SplineWalkerMode mode;
    [RangeAttribute(0, 1000)]
    public float progress;

    public int maxObjectCount;
    public float offset;
    public GameObject parent;
    public GameObject dotPrefab;
    public GameObject endPrefab;
    private GameObject[] dots;

    private void Start()
    {
        dots = new GameObject[maxObjectCount];
        for (int i = 0; i < maxObjectCount; i++)
        {
            dots[i] = GameObject.Instantiate(dotPrefab);
            dots[i].transform.parent = parent.transform;
            dots[i].GetComponent<Renderer>().enabled = false;
        }
        // var end = GameObject.Instantiate(endPrefab);
        // end.GetComponent<SplineCollisionHandler>().yPlus = true;
        // var t = spline.FindTAt(0.5f);
        // Vector3 position = spline.GetPoint(t);
        // end.transform.localPosition = position;
        // end.transform.LookAt(position + spline.GetDirection(t));

    }
    private void Update()
    {
        for (var i = 0; i < spline.arr[spline.arr.Length-1] / offset; i++)
        {
            if (i < maxObjectCount)
            {
                var progress = i * offset;
                var t = spline.FindTAt(progress);
                Vector3 position = spline.GetPoint(t);
                dots[i].transform.localPosition = position;
                if (lookForward)
                {
                    dots[i].transform.LookAt(position + spline.GetDirection(t));
                }
                dots[i].GetComponent<Renderer>().enabled = true;
            }
        }
    }
}
