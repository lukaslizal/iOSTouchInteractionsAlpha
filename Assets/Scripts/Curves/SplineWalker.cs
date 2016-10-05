using UnityEngine;

public class SplineWalker : MonoBehaviour
{
    public GameObject plane;
    public PositionState state;
    public PositionState prevState;
    public BezierSpline spline;
    public float bumpOffset;
    public bool lookForward;
    public float progress;
    public float t;

    public void Start()
    {
        t = 0f;
        SetProgress(t);
        transform.up = spline.GetDirection(t);
        transform.LookAt(Vector3.ProjectOnPlane(spline.GetPoint(t) + spline.GetDirection(t) * 100, new Vector3(0, 1, 0)) + new Vector3(0, transform.position.y, 0));
    }
    private void Update()
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
        if (spline.Loop)
        {
            progress = Mathf.Repeat(p, spline.arr[spline.arr.Length - 1]);
            t = spline.FindTAt(progress);
            Vector3 newPosition = spline.GetPoint(t);
            transform.localPosition = newPosition;
        }
        else
        {
            t = 0f;
            progress = p;
            if (progress < 0f)
            {
                Vector3 newPosition = spline.GetPoint(0f) + spline.GetDirection(0f) * (progress - 0f);
                transform.localPosition = newPosition;
            }
            else if (progress > spline.arr[spline.arr.Length - 1])
            {
                Vector3 newPosition = spline.GetPoint(1f) + spline.GetDirection(spline.arr[spline.arr.Length - 1]) * (progress - spline.arr[spline.arr.Length - 1]);
                transform.localPosition = newPosition;
                t = spline.FindTAt(spline.arr[spline.arr.Length - 1]);
            }
            else
            {
                t = spline.FindTAt(progress);
                Vector3 newPosition = spline.GetPoint(t);
                transform.localPosition = newPosition;
            }
        }
        if (lookForward)
        {
            // Debug.DrawRay(transform.position, transform.forward, Color.blue, 2f, true);
            // Debug.DrawRay(Vector3.ProjectOnPlane(spline.GetPoint(t) + spline.GetDirection(t)*100, new Vector3(0,1,0)), transform.forward, Color.red, 2f, true);

            transform.LookAt(Vector3.ProjectOnPlane(spline.GetPoint(t) + spline.GetDirection(t) * 100, new Vector3(0, 1, 0)) + new Vector3(0, transform.position.y, 0));
        }
        else
        {
            // follow camera rotation follows curvature of spline. We can also get different kind of target following when camera is rotatated by 90
            transform.up = spline.GetDirection(t);
            transform.rotation = Quaternion.Euler(0, 0, transform.eulerAngles.z);
        }
    }

    public void SetPositionState()
    {
        if (!spline.Loop)
        {
            if (progress >= 0f && progress <= spline.arr[spline.arr.Length - 1])
            {
                state = PositionState.FreeZone;
            }
            else
            {
                if (progress < 0f)
                {
                    state = PositionState.BumpForward;
                }
                else
                {
                    state = PositionState.BumpBack;
                }
            }
        }
    }
    public bool ToTriggerBump()
    {
        var trigger = prevState == PositionState.FreeZone && (state == PositionState.BumpForward || state == PositionState.BumpBack);
        prevState = state;
        return trigger;
    }
}