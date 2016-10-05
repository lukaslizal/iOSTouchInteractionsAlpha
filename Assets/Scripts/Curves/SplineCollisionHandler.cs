using UnityEngine;
using System.Collections;

public class SplineCollisionHandler : MonoBehaviour
{

    // public Vector3 Position; // position in front of camera
    // public bool xPlus;
    // public bool xMinus;
    // public bool yPlus;
    // public bool yMinus;
    // public GameObject xPlusNode;
    // public GameObject xMinusNode;
    // public GameObject yPlusNode;
    // public GameObject yMinusNode;


    // void Start()
    // {
    //     Position = -1f * transform.position;
    // }
    // void OnTriggerEnter(Collider other)
    // {
    //     GameObject.Find("Plane").GetComponent<CurvePanHandler>().SetCollider(GetComponent<Collider>());
    //     // GameObject.Find("Spline2").GetComponent<CurvePanHandler>().ResetGuideDestination();
    // }
    // void OnTriggerStay(Collider other)
    // {
    // }
    // void OnTriggerExit(Collider other)
    // {
    //     // GameObject.Find("Spline2").GetComponent<CurvePanHandler>().SetGuideDestination();
    //     // GameObject.Find("Spline2").GetComponent<CurvePanHandler>().SetNewGuideParams();
    //     GameObject.Find("Plane").GetComponent<CurvePanHandler>().SetCollider(null);
    // }

    // public bool IsCameraInFreeZone(PanOrientation panOrientation)
    // {
    //     float position = 0f;
    //     float extents = 0f;
    //     bool Plus = false;
    //     bool Minus = false;
    //     switch (panOrientation)
    //     {
    //         case PanOrientation.Horizontal:
    //             position = transform.position.x;
    //             extents = GetComponent<Collider>().bounds.extents.x;
    //             Minus = xMinus;
    //             Plus = xPlus;
    //             break;
    //         case PanOrientation.Vertical:
    //             position = transform.position.y;
    //             extents = GetComponent<Collider>().bounds.extents.y;
    //             Minus = yMinus;
    //             Plus = yPlus;
    //             break;
    //     }
    //     if (position > 0f && position <= extents)
    //     {
    //         return Minus;
    //     }
    //     else if (position < 0f && position >= -extents)
    //     {
    //         return Plus;
    //     }

    //     return false;
    // }
    // // check if camera is inside or outside of this collider, we cant depend on OnTriggerExit, because ontriggerexit() is working asynchronyously to Update() function
    // // without using this player could change direction outside of collider for a slight moment which means camera wouldnt be on our predefined track anymore 
    // public bool IsCameraInCollider()
    // {
    //     if (transform.position.x < GetComponent<Collider>().bounds.extents.x &&
    //     transform.position.x > -GetComponent<Collider>().bounds.extents.x &&
    //     transform.position.y < GetComponent<Collider>().bounds.extents.y &&
    //     transform.position.y > -GetComponent<Collider>().bounds.extents.y)
    //     {
    //         return true;
    //     }
    //     else
    //     {
    //         return false;
    //     }
    // }

    // public Vector3 GetPosition()
    // {
    //     return Position;
    // }

}
