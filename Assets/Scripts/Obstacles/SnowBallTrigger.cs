﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SnowBallTrigger : MonoBehaviour
{
    [SerializeField] SnowBall mySnowBall;

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Player"))
        {
            mySnowBall.Push();
            GetComponent<Collider2D>().enabled = false;
        }
        
    }
}
