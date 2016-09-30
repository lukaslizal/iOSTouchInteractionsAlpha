using UnityEngine;
using System.Collections;

public static class FloatArrayExtensions
{
    public static float Sample(this float[] fArr, float t)
    {
        int count = fArr.Length;
        if (count == 0)
        {
            Debug.LogError("Unable to sample array - it has no elements");
            return 0;
        }
        if (count == 1)
            return fArr[0];
        float iFloat = t * (count - 1);
        int idLower = Mathf.FloorToInt(iFloat);
        int idUpper = Mathf.FloorToInt(iFloat + 1);
        if (idUpper >= count)
            return fArr[count - 1];
        if (idLower < 0)
            return fArr[0];
        return Mathf.Lerp(fArr[idLower], fArr[idUpper], iFloat - idLower);
    }

    public static float FindTAt(this float[] fArr, float length)
    {

        if (fArr == null)
        {
            Debug.Log("FindTAt failed. fArray length is 0.");
            return 0;
        }
        else
        {
            var left = 0;
            var right = fArr.Length - 1;
            while (left + 1 != right && left < right)
            {
                if (left > right)
                {
                    return -1f;
                }
                var middle = (left + right) / 2;
                if (length < fArr[middle])
                {
                    right = middle;
                }
                else
                {
                    left = middle;
                }
            }
            var span = fArr[right] - fArr[left];
            var lengthPosInSpan = length - fArr[left];
            var inbetween = lengthPosInSpan / span;

            var tLast = (1f / (fArr.Length - 1)) * left;
            var CellSize = 1f / (fArr.Length - 1);

            return (tLast + (CellSize) * inbetween);
        }
    }
}
