using UnityEngine;

public class Interval {
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
	public float GetStart()
	{
		return start;
	}
	public float GetEnd()
	{
		return end;
	}
	public float GetCenter()
	{
		return center;
	}
	public float GetReach()
	{
		return reach;
	}
}
// public class Cell : Component
//      {
          
//          public GameObject cellSprite;
//          public Vector3 pos = new Vector3(0, 0, 0);
         
//          void Start()
//          {
//              CreateCell(cellSprite);
//          }
          
//          public void CreateCell(GameObject sprite)
//          {
//              Instantiate(sprite, pos, Quaternion.identity);
//          }
      
//      }
