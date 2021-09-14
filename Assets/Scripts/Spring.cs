using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spring : MonoBehaviour
{
    private GameObject player;
    private CharacterController2D playerController;
    private float offset = 1;
    private Rigidbody2D playerRB;
    [SerializeField] Animator anim;
    [SerializeField] Vector2 force;
    [SerializeField] bool contrainAirMovement;
    private AudioSource myAS;
    
    void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player");
        playerRB = player.GetComponent<Rigidbody2D>();
        playerController = player.GetComponent<CharacterController2D>();
        myAS = GetComponent<AudioSource>();
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if ((player.transform.position.y - offset) > transform.position.y)
        {
            myAS.Play();
            if(contrainAirMovement)
                playerController.SetAirControl(false);

            playerRB.velocity = Vector2.zero;
            playerRB.AddForce(force, ForceMode2D.Impulse);
            anim.SetTrigger("Spring");
        }
    }
}
