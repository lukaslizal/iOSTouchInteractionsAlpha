using UnityEngine;
using System.Collections;

public class SplineWalkingChainNoCorr : MonoBehaviour {

    public BezierSpline spline;

    public float duration;
	public float speed;
    public bool lookForward;

    public SplineWalkerMode mode;
    [RangeAttribute(0, 1000)]
    public float progress;

    public int objectCount;
    public float offset;
    public GameObject parent;
    public GameObject prefab;
    private GameObject[] prefabObjects;

    private void Start()
    {
        prefabObjects = new GameObject[objectCount];
        for (int i = 0; i < objectCount; i++)
        {
            prefabObjects[i] = GameObject.Instantiate(prefab);
            prefabObjects[i].transform.parent = parent.transform;
        }
    }
    private void Update()
    {
        if (duration != 0)
        {
            progress += (Time.deltaTime / duration)*speed;
        }

        for (var i = 0; i < objectCount; i++)
        {
            var loopOffsetProgress = (progress + i * offset) % spline.arr[spline.arr.Length - 1];
            Vector3 position = spline.GetPoint(loopOffsetProgress/spline.arr[spline.arr.Length - 1]);
            prefabObjects[i].transform.localPosition = position;
            if (lookForward)
            {
                prefabObjects[i].transform.LookAt(position + spline.GetDirection(spline.FindTAt(progress)));
            }
        }
    }
}
