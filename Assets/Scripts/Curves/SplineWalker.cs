using UnityEngine;

public class SplineWalker : MonoBehaviour
{
    public GameObject plane;
    public PositionState state;
    public PositionState prevState;
    public BezierSpline spline;
    public Interval[] attractionPoints;
    public Interval activeAtrractionPoint;
    public float bumpOffset;
    public bool followCurveOrientation;
    public float progress;
    public float t;
    public GameObject pointPrefab;
    public GameObject borderPrefab;

    public void Start()
    {
        // var reach = 4f;
        var reach = 5f;
        // attractionPoints = new Interval[] { new Interval(0, 5),new Interval(30, 5),new Interval(20, 5),new Interval(10, 5) };
        attractionPoints = new Interval[] { new Interval(120, reach),
        new Interval(130, reach),
        new Interval(140, reach),
        new Interval(150, reach),
        new Interval(160, reach),
        new Interval(170, reach),
        new Interval(180, reach),

        new Interval(240, reach),
        new Interval(250, reach),
        new Interval(270, reach),
        new Interval(300, reach),
        new Interval(340, reach),
        };
        for (int i = 0; i < attractionPoints.Length; i++)
        {
            var ti = spline.FindTAt(attractionPoints[i].center);
            Vector3 position = spline.GetPoint(ti);
            var point = GameObject.Instantiate(pointPrefab);
            point.transform.localPosition = position;
            point.transform.LookAt(position + spline.GetDirection(ti));

            // ti = spline.FindTAt(attractionPoints[i].start);
            // position = spline.GetPoint(ti);
            // point = GameObject.Instantiate(borderPrefab);
            // point.transform.localPosition = position;
            // point.transform.LookAt(position + spline.GetDirection(ti));

            // ti = spline.FindTAt(attractionPoints[i].end);
            // position = spline.GetPoint(ti);
            // point = GameObject.Instantiate(borderPrefab);
            // point.transform.localPosition = position;
            // point.transform.LookAt(position + spline.GetDirection(ti));
        }

        t = 0f;
        SetProgress(t);

        if (followCurveOrientation)
        {
            Camera.main.transform.localPosition = new Vector3(0, 0, -20);
            Camera.main.transform.localRotation = Quaternion.Euler(0, 0, 0);
        }
        else
        {
            Camera.main.transform.localPosition = new Vector3(-20, 0, 0);
            Camera.main.transform.localRotation = Quaternion.Euler(0, 90, 0);
        }
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
        if (followCurveOrientation)
        {
            // follow camera rotation follows curvature of spline. We can also get different kind of target following when camera is rotatated by 90
            transform.up = spline.GetDirection(t);
            transform.rotation = Quaternion.Euler(0, 0, transform.eulerAngles.z);
        }
        else
        {
            // Debug.DrawRay(transform.position, transform.forward, Color.blue, 2f, true);
            // Debug.DrawRay(Vector3.ProjectOnPlane(spline.GetPoint(t) + spline.GetDirection(t)*100, new Vector3(0,1,0)), transform.forward, Color.red, 2f, true);

            transform.LookAt(Vector3.ProjectOnPlane(spline.GetPoint(t) + spline.GetDirection(t) * 100, new Vector3(0, 1, 0)) + new Vector3(0, transform.position.y, 0));
        }
    }

    public void SetPositionState()
    {
        if (!spline.Loop)
        {
            if (progress >= 0f && progress <= spline.arr[spline.arr.Length - 1])
            {
                // var inAttration = false;
                // foreach (var i in attractionPoints)
                // {
                //     if (progress > i.start && progress < i.end)
                //     {
                //         // if (activeAtrractionPoint == null)
                //         activeAtrractionPoint = i;
                //         inAttration = true;
                //     }
                // }
                // prevState = state;
                // if (inAttration)
                // {
                //     state = PositionState.AttractionZone;
                // }
                // else
                // {
                //     activeAtrractionPoint = null;
                //     state = PositionState.FreeZone;
                // }

                prevState = state;
                state = PositionState.FreeZone;
            }
            else
            {
                prevState = state;
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
    public Interval CheckForAttractionPointAt(float progress)
    {
        activeAtrractionPoint = null;
        Interval point = null;
        var i = 0;
        while (point == null && i < attractionPoints.Length)
        {
            if (progress > attractionPoints[i].GetStart() && progress < attractionPoints[i].GetEnd())
            {
                // Debug.Log("destination: " + progress + ", center: " + attractionPoints[i].center+", number: "+i);
                point = attractionPoints[i];
            }
            i++;
        }
        return point;
        // foreach (var i in attractionPoints)
        // {
        //     if (progress > i.start && progress < i.end)
        //     {
        //         if (activeAtrractionPoint != null)
        //             point = i;
        //     }
        // }
        // Debug.Log(point);
    }
    public bool ToTriggerBump()
    {
        var trigger = (prevState == PositionState.FreeZone || prevState == PositionState.AttractionZone) && (state == PositionState.BumpForward || state == PositionState.BumpBack);
        prevState = state;
        return trigger;
    }
    public PositionState GetState()
    {
        return state;
    }
    public PositionState GetPrevState()
    {
        return prevState;
    }
    public float GetProgress()
    {
        return progress;
    }
    public Interval GetActiveAttractionPoint()
    {
        return activeAtrractionPoint;
    }

    // where player is inside active interval expressed as flaot between -1..1
    public float GetNormalizedDistanceToCenter()
    {
        return (activeAtrractionPoint.center - progress) / (activeAtrractionPoint.center - activeAtrractionPoint.start);
    }
    // where player is inside active interval expressed as flaot between -1..1
    public float GetNormalizedDistanceTo(float to, float from)
    {
        return (to - progress) / (to - from);
    }

    public bool IsPassing(float magnitude, float inertiaIntensity)
    {
        // Debug.Log("expected end: " + GetEndFromMagnitude(magnitude, inertiaIntensity) + "; passing: " + (GetEndFromMagnitude(magnitude, inertiaIntensity) < activeAtrractionPoint.start && GetEndFromMagnitude(magnitude, inertiaIntensity) > activeAtrractionPoint.end));
        return GetEndFromMagnitude(magnitude, inertiaIntensity) < activeAtrractionPoint.start || GetEndFromMagnitude(magnitude, inertiaIntensity) > activeAtrractionPoint.end;
    }
    // get destination of freemovetzone inertia
    public float GetEndFromMagnitude(float magnitude, float inertiaIntensity)
    {
        // Debug.Log("predicted destination: "+(progress - magnitude * (inertiaIntensity * 10) - 0.011f));
        return progress - magnitude * (inertiaIntensity * 10) - 0.011f;
    }
    // get starting diff (magnitude) of freemovezone inertia which results in stoping in destination
    public float GetMagnitudeFromEnd(float from, float to, float inertiaIntensity)
    {
        var distance = from - to;
        return distance / (inertiaIntensity * 10);
    }
}