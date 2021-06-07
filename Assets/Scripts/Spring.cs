﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spring : MonoBehaviour
{
    private GameObject player;
    private float offset = 1;
    private Rigidbody2D playerRB;
    [SerializeField] Animator anim;
    [SerializeField] Vector2 force;
    
    void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player");
        playerRB = player.GetComponent<Rigidbody2D>();
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if ((player.transform.position.y - offset) > transform.position.y)
        {
            playerRB.velocity = Vector2.zero;
            playerRB.AddForce(force, ForceMode2D.Impulse);
            anim.SetTrigger("Spring");
        }
    }
}