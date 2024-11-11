using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Wagon : MonoBehaviour
{
    Vector2 targetPos;

    void Start()
    {
        targetPos = (Vector2)transform.position + new Vector2(50, 10);
    }

    public void MoveWagon()
    {
        transform.LeanMove(targetPos, 10);
    }
}
