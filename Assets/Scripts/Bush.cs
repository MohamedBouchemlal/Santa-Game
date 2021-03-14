using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bush : MonoBehaviour
{
    private CharacterController2D player;
    private Animator anim;

    void Start()
    {
        player = GameObject.FindWithTag("Player").GetComponent<CharacterController2D>();
        anim = GetComponent<Animator>();
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        GameObject interactor = collision.gameObject;

            if (interactor.transform.position.x - transform.position.x < 0)
                anim.Play("Rotate Right");
            else
                anim.Play("Rotate Left");
    }
}
