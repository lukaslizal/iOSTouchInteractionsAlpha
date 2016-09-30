using UnityEngine;
using System.Collections;


public enum GestureState { Start, End, Done };     //states - Start - finger on screen, End - figer off screen (inertia), Done - inertia stops -> camera is still, Collision - inertia is influenced by any kind of obstacle (borders,snapping points etc.)
public enum PanOrientation { Horizontal, Vertical };     //states - Horizontal - camera moves on x axis, Vertical - camera moves on y axis
public enum PanDirection { Minus, Plus };     //states - Minus - camera moves in minus direction (in activated oriantation), Plus - camera moves to Plus direction

