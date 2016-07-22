using UnityEngine;
using System.Collections;
using TouchScript.Gestures;
using System;

/*
* @autor Lukas Lizal
* @version 19.2.2016
*/
public class PanHandler : MonoBehaviour
{
    public enum GestureState { Start, End, Done };     //states - Start - finger on screen, End - figer off screen (inertia), Done - inertia stops -> camera is still, Collision - inertia is influenced by any kind of obstacle (borders,snapping points etc.)
    public enum PanOrientation { Horizontal, Vertical };     //states - Horizontal - camera moves on x axis, Vertical - camera moves on y axis
    public enum PanDirection { Minus, Plus };     //states - Minus - camera moves in minus direction (in activated oriantation), Plus - camera moves to Plus direction
    public GestureState gestureState;          //which state is Pan in? (start,end,done)
    public PanOrientation panOrientation;          //which direction does Pan follows?
    public PanDirection panDirection;          //which direction does Pan follows?
    [Range(0, 1)]
    public float inertiaIntensity;              //each update on inertial movement works like -> newDeltaPosition = previousDeltaPosition*inertiaIntensity
    [Range(0, 1)]
    public float maxInertia;                    //inertia values exceeding maxinertia are clamped to maxInertia Value 
    [Range(0, 0.1f)]
    public float minInertia;                    //minimum last deltaPosition at which inertia is triggered
    public float maxDifference;                 //all values of deltaPosition exceeding this value will be clamped to this value (so player cant drag too fast which could result in collider related glitches)
    private Vector3 difference;                 //Pan variable, every update its value is added current position of object which is being pan -> which results in pan effect
    private Vector3 guideDestination;
    public Vector3 guideStart;
    private float guideDistance;
    private Collider guideStartNode;
    private bool triggerCenter;                 // when this is triggerCenter is triggered it means camera have just entered bumping area, so script should begin process of bumping back
    private Collider col;                       // null when camera not inside collider; collider assigned when camera inside collider area; sometimes collider is assigned but camera already left collider, because onCollisionExit was not called yet to null col value ( use col.iscamerainsidecolllider() to check it)
    private Vector3 colPrevPosition;            // used to detemine in which direction is player moving (SlowDown())
    void Awake()
    {
        difference = Vector2.zero;
        gestureState = GestureState.Done;
    }
    void Start()
    {
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
        difference.x = Mathf.Clamp(difference.x, -maxDifference, maxDifference); //ensures player wont move beyond breaks (colliders) when performing quick moves
        difference.y = Mathf.Clamp(difference.y, -maxDifference, maxDifference); //ensures player wont move beyond breaks (colliders) when performing quick moves
        gestureState = GestureState.Start;

        SetOrientation();
        SetDirection();

        if (col != null && !col.GetComponent<CollisionHandler>().IsCameraInFreeZone(panOrientation))
        {
            SlowDown(col);
        }

    }

    //update new point position (delta of previous and new point)
    private void panHandler(object sender, EventArgs e)
    {
        var gesture = sender as TransformGesture;
        difference = gesture.DeltaPosition;
        difference.x = Mathf.Clamp(difference.x, -maxDifference, maxDifference); //ensures player wont move beyond breaks (colliders) when performing quick moves
        difference.y = Mathf.Clamp(difference.y, -maxDifference, maxDifference); //ensures player wont move beyond breaks (colliders) when performing quick moves
        difference.z = 0f;

        //which direction are we scrolling?
        SetOrientation();
        SetDirection();

        //decreasing movement when inside bump area and moving out
        if (col != null && !col.GetComponent<CollisionHandler>().IsCameraInFreeZone(panOrientation))
        {
            SlowDown(col);
        }
    }

    //update last user input point (inertia calculation based on last difference value); switch to End state + gameObject.GetComponent<Collider>().bounds.extents.x
    private void panCompletedHandler(object sender, EventArgs e)
    {
        var gesture = sender as TransformGesture;
        difference = gesture.DeltaPosition;
        difference.x = Math.Abs(difference.x) <= maxInertia ? difference.x : maxInertia * Math.Sign(difference.x);
        difference.y = Math.Abs(difference.y) <= maxInertia ? difference.y : maxInertia * Math.Sign(difference.y);
        difference.x = Math.Abs(difference.x) <= minInertia ? 0f : difference.x;
        difference.y = Math.Abs(difference.y) <= minInertia ? 0f : difference.y;

        gestureState = GestureState.End;
        
        // bump back if user drops swipe in bump area
        if (col != null && col.GetComponent<CollisionHandler>().IsCameraInCollider() && !col.GetComponent<CollisionHandler>().IsCameraInFreeZone(panOrientation))
        {
            switch (panOrientation)
            {
                case PanOrientation.Horizontal:
                    LeanTween.cancelAll();
                    LeanTween.moveX(gameObject
                    , col.GetComponent<CollisionHandler>().Position.x
                    , .6f)
                    .setEase(LeanTweenType.easeOutQuint);
                    break;
                case PanOrientation.Vertical:
                    LeanTween.moveY(gameObject
                    , col.GetComponent<CollisionHandler>().Position.y
                    , .6f)
                    .setEase(LeanTweenType.easeOutQuint);
                    break;
            }

            difference = Vector3.zero;
            gestureState = GestureState.Done;
        }
    }

    void Update()
    {

        switch (gestureState)
        {
            // manual paning
            case GestureState.Start:
                Guide();
                transform.position += difference;
                difference = Vector3.zero;
                break;
            // inertia
            case GestureState.End:
                // if camera is in free moving area
                if (col == null || (col != null && col.GetComponent<CollisionHandler>().IsCameraInFreeZone(panOrientation)))
                {
                    Guide();
                    FreeMoveZoneInertia();
                }
                // if camera is inside bumping end
                else if (col != null &&  col.GetComponent<CollisionHandler>().IsCameraInCollider() && !col.GetComponent<CollisionHandler>().IsCameraInFreeZone(panOrientation))
                {
                    Bump();
                }

                transform.position += new Vector3(Mathf.Clamp(difference.x, -0.6f, 0.6f), Mathf.Clamp(difference.y, -0.6f, 0.6f), 0);
                if (Math.Abs(difference.magnitude) < 0.001f && !LeanTween.isTweening())
                {
                    gestureState = GestureState.Done;
                    difference = Vector2.zero;
                }

                break;
            case GestureState.Done:
                break;
        }
    }

    //smooth slowing down after finger leaves display (inertia)
    private void FreeMoveZoneInertia()
    {
        float differenceDirection = 0f;
        switch (panOrientation)
        {
            case PanOrientation.Horizontal:
                differenceDirection = difference.x;
                break;
            case PanOrientation.Vertical:
                differenceDirection = difference.y;
                break;
        }

        //differenceDirection = differenceDirection * 0.95f * Time.deltaTime * (inertiaIntensity * Application.targetFrameRate);
        differenceDirection = differenceDirection * 0.95f * (inertiaIntensity);
        difference = Vector3.zero;

        switch (panOrientation)
        {
            case PanOrientation.Horizontal:
                difference.x = differenceDirection;
                break;
            case PanOrientation.Vertical:
                difference.y = differenceDirection;
                break;
            default:
                difference = Vector3.zero;
                break;
        }
        // save positon of crossroad collider, so we can check next time, if camera crossed the middle of crossroad. as soon as we detect crossed road we have to call bump function
        if (col != null && col.GetComponent<CollisionHandler>().IsCameraInFreeZone(panOrientation))
        {
            colPrevPosition = col.transform.position;
        }

    }

    //slows down as player is panning into the end of bumping area
    //slows down only when player moves into the end of bump area not slowing down when moving back to free movement area
    private void SlowDown(Collider col)
    {
        var differenceDirection = 0f;
        var extentsDirection = 0f;
        var distanceFromEdgeDirectionPlus = 0f;
        var distanceFromEdgeDirectionMinus = 0f;
        var Minus = false;
        var Plus = false;
        switch (panOrientation)
        {
            case PanOrientation.Horizontal:
                differenceDirection = difference.x;
                extentsDirection = col.bounds.extents.x;
                distanceFromEdgeDirectionPlus = (col.GetComponent<CollisionHandler>().GetPosition() + col.bounds.extents - transform.position).x;
                distanceFromEdgeDirectionMinus = (col.GetComponent<CollisionHandler>().GetPosition() - col.bounds.extents - transform.position).x;
                Minus = col.GetComponent<CollisionHandler>().xMinus;
                Plus = col.GetComponent<CollisionHandler>().xPlus;
                break;
            case PanOrientation.Vertical:
                differenceDirection = difference.y;
                extentsDirection = col.bounds.extents.y;
                distanceFromEdgeDirectionPlus = (col.GetComponent<CollisionHandler>().GetPosition() + col.bounds.extents - transform.position).y;
                distanceFromEdgeDirectionMinus = (col.GetComponent<CollisionHandler>().GetPosition() - col.bounds.extents - transform.position).y;
                Minus = col.GetComponent<CollisionHandler>().yMinus;
                Plus = col.GetComponent<CollisionHandler>().yPlus;
                break;
        }
        // difference.x < 0 for not slowing down motion when moving in direction back to freezone
        // !Plus - if Plus side is
        if (!Plus && differenceDirection < 0f)
        {
            var normalizedDistance = Math.Abs(extentsDirection / distanceFromEdgeDirectionPlus * 2 - 1f);
            //sometimes when swiping furiously back and forward normalizedDistance can get out of range <0,1> into high very numbers so we need to clip these cases
            if (normalizedDistance > 1f || normalizedDistance < 0f)
            {
                normalizedDistance = 0f;
            }
            differenceDirection *= normalizedDistance;
        }
        if (!Minus && differenceDirection > 0f)
        {
            var normalizedDistance = Math.Abs(extentsDirection / distanceFromEdgeDirectionMinus * 2 + 1f);
            if (normalizedDistance > 1f || normalizedDistance < 0f)
            {
                normalizedDistance = 0f;
            }
            differenceDirection *= normalizedDistance;
        }
        switch (panOrientation)
        {
            case PanOrientation.Horizontal:
                difference.x = differenceDirection;
                break;
            case PanOrientation.Vertical:
                difference.y = differenceDirection;
                break;
        }
    }

    //bumping back allows us constrain inertia movement according to placed crossroads
    private void Bump()
    {
        if (ToTriggerBump() && !LeanTween.isTweening())
        {
            var col = this.col; // col causing null exception because second leantween is delayed and so slowDown() may be passed null collider
            switch (panOrientation)
            {
                case PanOrientation.Horizontal:
                    //calling tweening functions only once (tweening functions have to be called only once to work as expected)
                    LeanTween.value(gameObject
                        , difference.x, 0, .2f).setOnUpdate((float val) =>
                        {
                            difference = new Vector3(val, 0, 0);
                            SlowDown(col);
                        }).setEase(LeanTweenType.linear);
                    LeanTween.moveX(gameObject
                        , col.GetComponent<CollisionHandler>().Position.x
                        , Mathf.Clamp(1f / (1f * Math.Abs(difference.x)), 0.2f, .7f)) //speed of tween is higher when speed of inertia was higher..
                    .setEase(LeanTweenType.easeOutQuint).setDelay(.2f);
                    break;
                case PanOrientation.Vertical:
                    //calling tweening functions only once (tweening functions have to be called only once to work as expected)
                    LeanTween.value(gameObject
                        , difference.y, 0, .2f).setOnUpdate((float val) =>
                        {
                            difference = new Vector3(0, val, 0);
                            SlowDown(col);
                        }).setEase(LeanTweenType.linear);
                    LeanTween.moveY(gameObject
                        , col.GetComponent<CollisionHandler>().Position.y
                        , Mathf.Clamp(1f / (1f * Math.Abs(difference.y)), 0.2f, .7f)) //speed of tween is higher when speed of inertia was higher..
                    .setEase(LeanTweenType.easeOutQuint).setDelay(.2f);
                    break;
            }


            difference = Vector3.zero;
            colPrevPosition = col.transform.position;
        }
    }

    //should we trigger bumping back right now?
    private bool ToTriggerBump()
    {
        switch (panOrientation)
        {
            case PanOrientation.Horizontal:
                return (colPrevPosition.x * col.transform.position.x < 0f && !col.GetComponent<CollisionHandler>().IsCameraInFreeZone(panOrientation));
            case PanOrientation.Vertical:
                return (colPrevPosition.y * col.transform.position.y < 0f && !col.GetComponent<CollisionHandler>().IsCameraInFreeZone(panOrientation));
            default:
                return false;
        }
    }

    // sets horizontal or vertial direction of movement
    // direction can only be changed inside of crossroad
    // direction can not be changed in crossroads which have any of pairs of two opposite sides "closed"
    private void SetOrientation()
    {
        if (col != null && col.GetComponent<CollisionHandler>().IsCameraInCollider())
        {
            if (Math.Abs(difference.x) < Math.Abs(difference.y) && (col.GetComponent<CollisionHandler>().yMinus || col.GetComponent<CollisionHandler>().yPlus))
            {
                panOrientation = PanOrientation.Vertical;
            }
            if (Math.Abs(difference.x) >= Math.Abs(difference.y) && (col.GetComponent<CollisionHandler>().xMinus || col.GetComponent<CollisionHandler>().xPlus))
            {
                panOrientation = PanOrientation.Horizontal;
            }
        }

        //set difference to zero on the not active direction on every update
        switch (panOrientation)
        {
            case PanOrientation.Horizontal:
                difference.y = 0f;
                break;
            case PanOrientation.Vertical:
                difference.x = 0f;
                break;
        }

    }

    private void SetDirection()
    {
        if (panOrientation == PanOrientation.Horizontal)
        {
            if (difference.x < 0)
            {
                if (col == null && panDirection != PanDirection.Plus && transform.position.x < guideStartNode.GetComponent<CollisionHandler>().Position.x)
                {
                    //Debug.Log(transform.position.x+", "+guideStart.x);
                    SetNewGuideParams();
                }
                panDirection = PanDirection.Plus;
            }
            else if (difference.x > 0)
            {
                if (col == null && panDirection != PanDirection.Minus && transform.position.x > guideStartNode.GetComponent<CollisionHandler>().Position.x )
                {
                    //Debug.Log(transform.position.x+", "+guideStart.x);
                    SetNewGuideParams();
                }
                panDirection = PanDirection.Minus;
            }
        }
        else if (panOrientation == PanOrientation.Vertical)
        {
            if (difference.y < 0)
            {
                if (col == null && panDirection != PanDirection.Plus && transform.position.y < guideStartNode.GetComponent<CollisionHandler>().Position.y)
                {
                    //Debug.Log(transform.position.x+", "+guideStart.x);
                    SetNewGuideParams();
                }
                panDirection = PanDirection.Plus;
            }
            else if (difference.y > 0)
            {
                if (col == null && panDirection != PanDirection.Minus && transform.position.y > guideStartNode.GetComponent<CollisionHandler>().Position.y)
                {
                    //Debug.Log(transform.position.x+", "+guideStart.x);
                    SetNewGuideParams();
                }
                panDirection = PanDirection.Minus;
            }
        }
    }

    public void Guide()
    {
        if (panOrientation == PanOrientation.Horizontal)
        {
            if (difference.x < 0 && col == null && panDirection == PanDirection.Plus && transform.position.x < guideStartNode.GetComponent<CollisionHandler>().Position.x)
            {
                transform.position = new Vector3(transform.position.x,Mathf.Lerp(guideDestination.y,guideStart.y,(guideDestination.x-transform.position.x)/guideDistance),transform.position.z);
            }
            else if (difference.x > 0 && col == null && panDirection == PanDirection.Minus && transform.position.x > guideStartNode.GetComponent<CollisionHandler>().Position.x)
            {
                transform.position = new Vector3(transform.position.x,Mathf.Lerp(guideDestination.y,guideStart.y,(guideDestination.x-transform.position.x)/guideDistance),transform.position.z);
            }
        }
        else if (panOrientation == PanOrientation.Vertical)
        {
            if (difference.y < 0 && col == null && panDirection == PanDirection.Plus && transform.position.y < guideStartNode.GetComponent<CollisionHandler>().Position.y)
            {
                transform.position = new Vector3(Mathf.Lerp(guideDestination.x,guideStart.x,(guideDestination.y-transform.position.y)/guideDistance), transform.position.y, transform.position.z);
                
            }
            else if (difference.y > 0 && col == null && panDirection == PanDirection.Minus && transform.position.y > guideStartNode.GetComponent<CollisionHandler>().Position.y)
            {
                transform.position = new Vector3(Mathf.Lerp(guideDestination.x,guideStart.x,(guideDestination.y-transform.position.y)/guideDistance),transform.position.y,transform.position.z);
            }
        }
    }

    public void SetGuideDestination()
    {
        if (panOrientation == PanOrientation.Horizontal && col != null)
        {
            if (panDirection == PanDirection.Plus)
            {
                guideDestination = col.GetComponent<CollisionHandler>().xPlusNode.GetComponent<CollisionHandler>().Position + new Vector3(col.bounds.extents.x,0,0);
                //Debug.Log(guideDestination);
            }
            else if (panDirection == PanDirection.Minus)
            {
                guideDestination = col.GetComponent<CollisionHandler>().xMinusNode.GetComponent<CollisionHandler>().Position - new Vector3(col.bounds.extents.x,0,0);
                //Debug.Log(guideDestination);
            }
        }
        else if (panOrientation == PanOrientation.Vertical && col != null)
        {
            if (panDirection == PanDirection.Plus)
            {
                guideDestination = col.GetComponent<CollisionHandler>().yPlusNode.GetComponent<CollisionHandler>().Position + new Vector3(0,col.bounds.extents.y,0);
                //Debug.Log(guideDestination);
            }
            else if (panDirection == PanDirection.Minus)
            {
                guideDestination = col.GetComponent<CollisionHandler>().yMinusNode.GetComponent<CollisionHandler>().Position - new Vector3(0,col.bounds.extents.y,0);
                //Debug.Log(guideDestination);
            }
        }
    }
    public void SetNewGuideParams()
    {
        guideStart = transform.position;
        if (panOrientation == PanOrientation.Horizontal)
        {
            guideDistance = guideDestination.x - guideStart.x;
        }
        else if (panOrientation == PanOrientation.Vertical)
        {
            guideDistance = guideDestination.y - guideStart.y;
        }
        //Debug.Log(guideDistance);
    }
    public void ResetGuideDestination()
    {
        guideDestination = col.GetComponent<CollisionHandler>().transform.position;
    }

    public GestureState GetGestureState()
    {
        return gestureState;
    }

    public Vector3 GetDifference()
    {
        return difference;
    }

    public void SetDifference(Vector3 difference)
    {
        this.difference = difference;
    }

    public void SetCollider(Collider col)
    {
        this.col = col;
        if(col != null)
            guideStartNode = col;
    }

    public void setGestureDone()
    {
        this.gestureState = GestureState.Done;
    }
}