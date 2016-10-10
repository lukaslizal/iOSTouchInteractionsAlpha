using UnityEngine;
using System.Collections;

public class Interval : MonoBehaviour {
	public float start;
	public float end;
	public float center;
	public float reach;

	public Interval( float center, float reach){
		this.start = center-reach;
		this.end = center+reach;
		this.center = center;
		this.reach = reach;
	}
	public float getStart()
	{
		return start;
	}
	public float getEnd()
	{
		return end;
	}
	public float getCenter()
	{
		return center;
	}
	public float getReach()
	{
		return reach;
	}
}
