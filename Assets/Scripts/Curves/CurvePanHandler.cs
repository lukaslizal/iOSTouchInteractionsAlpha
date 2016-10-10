using UnityEngine;
using System.Collections;
using TouchScript.Gestures;
using System;

/*  
*   
*   
*/
public class CurvePanHandler : MonoBehaviour
{
    private SplineWalker walker;                //object being moved
    private Vector3 difference;                 //Pan variable, gesture differenc between detected current and last touchpoint
    private float magnitude;                    //is like difference, but projected into relevant direction vector (direction of path)
    private Vector3 direction;                  //direction vector in which we need to pan
    private float progress;                     // progress of whatever we are moving in game scene
    private float dampProgress;                     // progress of whatever we are moving in game scene
    private bool passing;
    private bool panCompletedInAttractor;
    public float distanceFromEdge;              // when in bump zone how close is player to the very end of bump zone edge
    public float normalizedDistance;            // distance from edge as interval <0,1>
    public GestureState gestureState;           //which state is Pan in? (start,end,done)
    [Range(0, 1)]
    public float inertiaIntensity;              //each update on inertial movement works like -> newDeltaPosition = previousDeltaPosition*inertiaIntensity
    [Range(0, 3)]
    public float maxMagnitude;                  //inertia values exceeding maxMagnitude are clamped to maxMagnitude Value 

    void Awake()
    {
        progress = 0f;
        magnitude = 0f;
        difference = Vector2.zero;
        gestureState = GestureState.Done;
        passing = false;
    }
    void Start()
    {
        walker = Camera.main.transform.GetComponentInParent<SplineWalker>();
    }

    //subscribe "handling" functions to gesture events
    private void OnEnable()
    {
        GetComponent<TransformGesture>().TransformStarted += panStartedHandler;
        GetComponent<TransformGesture>().Transformed += panHandler;
        GetComponent<TransformGesture>().TransformCompleted += panCompletedHandler;
    }

    //unsubscribe "handling" functions from gesture events
    private void OnDisable()
    {
        GetComponent<TransformGesture>().TransformStarted -= panStartedHandler;
        GetComponent<TransformGesture>().Transformed -= panHandler;
        GetComponent<TransformGesture>().TransformCompleted -= panCompletedHandler;
    }

    //init paning
    private void panStartedHandler(object sender, EventArgs e)
    {
        LeanTween.cancelAll(); // disable ongoing tweens so finger has all control over movement
        var gesture = sender as TransformGesture;

        difference = gesture.DeltaPosition;
        direction = walker.spline.GetDirection(walker.t);
        magnitude = Vector3.Dot(difference, Vector3.ProjectOnPlane(direction, Camera.main.transform.forward).normalized);
        magnitude = Mathf.Clamp(magnitude, -maxMagnitude, maxMagnitude);

        if (walker.state == PositionState.BumpForward || walker.state == PositionState.BumpBack)
        {
            SlowDown();
        }

        gestureState = GestureState.Start;


    }

    //update new point position (delta of previous and new point)
    private void panHandler(object sender, EventArgs e)
    {
        var gesture = sender as TransformGesture;

        difference = gesture.DeltaPosition;
        direction = walker.spline.GetDirection(walker.t);
        magnitude = Vector3.Dot(difference, Vector3.ProjectOnPlane(direction, Camera.main.transform.forward).normalized);
        magnitude = Mathf.Clamp(magnitude, -maxMagnitude, maxMagnitude);
        //decreasing movement when inside bump area and moving out
        if (walker.state == PositionState.BumpForward || walker.state == PositionState.BumpBack)
        {
            SlowDown();
        }
    }

    //update last user input point (inertia calculation based on last difference value); switch to End state + gameObject.GetComponent<Collider>().bounds.extents.x
    private void panCompletedHandler(object sender, EventArgs e)
    {
        var gesture = sender as TransformGesture;

        difference = gesture.DeltaPosition;
        direction = walker.spline.GetDirection(walker.t);
        magnitude = Vector3.Dot(difference, Vector3.ProjectOnPlane(direction, Camera.main.transform.forward).normalized);
        magnitude = Mathf.Clamp(magnitude, -maxMagnitude, maxMagnitude);

        // Debug.Log("magnitude: " + magnitude + "; startProgress: " + progress + "; expectedProgress: " + walker.GetEndFromMagnitude(magnitude, inertiaIntensity));
        if(walker.getState()==PositionState.AttractionZone)
        {
            // Debug.Log("setIsPassing on pan completed");
            passing = walker.IsPassing(magnitude,inertiaIntensity);
            // passing = false;
        }

        gestureState = GestureState.End;
        if(walker.getState()!= PositionState.AttractionZone)
            walker.prevState = PositionState.FreeZone;
    }

    void Update()
    {
        switch (gestureState)
        {
            // manual paning
            case GestureState.Start:
                progress -= magnitude;
                walker.SetProgress(progress);
                magnitude = 0f;
                walker.SetPositionState();
                break;
            // inertia
            case GestureState.End:
                switch (walker.getState())
                {
                    // if camera is in free moving area
                    case PositionState.FreeZone:
                        FreeMoveZoneInertia();
                        break;
                    case PositionState.AttractionZone:
                        if (walker.getPrevState() != PositionState.AttractionZone) // || (walker.getPrevState() == PositionState.AttractionZone && walker.getActiveAttractionPoint()!=walker.getActiveAttractionPoint()))
                        {
                            // Debug.Log("setIsPassing on enter zone. "+walker.getPrevState());
                            passing = walker.IsPassing(magnitude, inertiaIntensity);
                            // passing = false;
                        }
                        FreeMoveZoneInertia();
                        AttractToPoint();

                        break;
                    // if camera is inside bumping end
                    case PositionState.BumpBack:
                        Bump();
                        break;
                    // if camera is inside bumping end
                    case PositionState.BumpForward:
                        Bump();
                        break;
                }
                if (!passing && walker.getState() == PositionState.AttractionZone)
                    // progress = Mathf.SmoothStep(progress, dampProgress, Mathf.Abs(walker.getNormalizedDistanceToCenter() * 5));
                    progress = Mathf.Lerp(progress, dampProgress, Mathf.Sqrt(Mathf.Sqrt(Mathf.Abs(walker.getNormalizedDistanceToCenter()))));
                else
                    progress -= magnitude;


                // Debug.Log(walker.getNormalizedDistanceToCenter());
                // progress = dampProgress;

                walker.SetProgress(progress);
                if (Math.Abs(magnitude) < 0.001f && !LeanTween.isTweening())
                {
                    // gestureState = GestureState.Done;
                    magnitude = 0f;
                    passing = false;
                }
                walker.SetPositionState();
                break;
            case GestureState.Done:
                break;
        }
    }

    //smooth slowing down after finger leaves display (inertia)
    private void FreeMoveZoneInertia()
    {
        magnitude *= inertiaIntensity;
    }

    private void AttractToPoint()
    {
        if (!passing && Mathf.Abs(progress - walker.activeAtrractionPoint.getCenter()) > 0.05)
        {
            dampProgress = Mathf.SmoothDamp(walker.getProgress(), walker.activeAtrractionPoint.getCenter(), ref magnitude, 0.2f); // pozn cas t by mel byt zavisly na delce intervalu! pozdeji naimplementovat
        }
    }
    private void Bump()
    {
        var backToSpline = 0f;
        if (walker.state == PositionState.BumpBack)
        {
            backToSpline = walker.spline.arr[walker.spline.arr.Length - 1];
        }

        if (walker.ToTriggerBump() && !LeanTween.isTweening())
        {
            //calling tweening functions only once (tweening functions have to be called only once to work as expected)
            LeanTween.value(gameObject
                , magnitude, 0
                , .2f)
                .setOnUpdate((float val) =>
                {
                    magnitude = val;
                    SlowDown();
                })
                .setEase(LeanTweenType.linear);

            LeanTween.value(gameObject
                , progress, backToSpline
                , Mathf.Clamp(1f / (1f * Math.Abs(magnitude)), .2f, .7f))
                .setOnUpdate((float val) =>
                {
                    progress = val;
                })
                .setEase(LeanTweenType.easeOutQuint);

            magnitude = 0f;
        }
    }

    //slows down as player is panning into the end of bumping area
    //slows down only when player moves into the end of bump area not slowing down when moving back to free movement area
    private void SlowDown()
    {
        distanceFromEdge = 0f;
        normalizedDistance = 1f;
        if (walker.state == PositionState.BumpForward)
        {
            distanceFromEdge = Math.Abs(0f + walker.bumpOffset + progress);
        }
        if (walker.state == PositionState.BumpBack)
        {
            distanceFromEdge = Math.Abs(walker.spline.arr[walker.spline.arr.Length - 1] + walker.bumpOffset - progress);
        }

        // slow down only when moving in direction to the bump - and not slow down when moving finger out of bumping area
        if ((walker.state == PositionState.BumpForward && magnitude > 0f) || (walker.state == PositionState.BumpBack && magnitude < 0f))
        {
            normalizedDistance = Math.Abs(distanceFromEdge / walker.bumpOffset);
            //sometimes when swiping furiously back and forward normalizedDistance can get out of range <0,1> into high very numbers so we need to clip these cases
            if (normalizedDistance > 1f || normalizedDistance < 0f)
            {
                normalizedDistance = 0f;
            }
            magnitude *= normalizedDistance * normalizedDistance;
        }
    }
}
