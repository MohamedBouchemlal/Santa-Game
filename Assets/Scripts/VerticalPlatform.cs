using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VerticalPlatform : MonoBehaviour
{
    private PlatformEffector2D effector;
    public float waitTime = 0.5f;
    GameObject player;
    void Start()
    {
        effector = gameObject.GetComponent<PlatformEffector2D>();
        player = GameObject.FindGameObjectWithTag("Player");
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.DownArrow) && player.GetComponent<CharacterController2D>().m_Grounded)
        {
            effector.rotationalOffset = 180f;
            waitTime = 0;    
        }
        else
            if(waitTime <= 0.5)
            waitTime += Time.deltaTime;

        if (waitTime >= 0.5)
        {
            effector.rotationalOffset = 0;
        }
        if (player)
        {
            if (player.GetComponent<Rigidbody2D>().velocity.y > 1)
                gameObject.GetComponent<BoxCollider2D>().enabled = false;
            else
                gameObject.GetComponent<BoxCollider2D>().enabled = true;
        }      
    }
}
