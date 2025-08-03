using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VerticalPlatform : MonoBehaviour
{
    private PlatformEffector2D effector;
    public float waitTime = 0.5f;
    private BoxCollider2D myCollider;

    private GameObject player;
    private CharacterController2D playerController;
    private Rigidbody2D playerRB;

    private Vector2 touchDownPos;
    private Vector2 touchUpPos;

    private CrackedIce myCrackedIce;

    void Start()
    {
        effector = GetComponent<PlatformEffector2D>();
        myCollider = GetComponent<BoxCollider2D>();

        player = GameObject.FindGameObjectWithTag("Player");
        playerController = player.GetComponent<CharacterController2D>();
        playerRB = player.GetComponent<Rigidbody2D>();

        if(GetComponent<CrackedIce>())
            myCrackedIce = GetComponent<CrackedIce>();
    }

    void Update()
    {
        if ((Input.GetKeyDown(KeyCode.DownArrow) || Input.GetKeyDown(KeyCode.S) || CheckSwipeDown())
                                    && playerController.m_Grounded)
        {
            effector.rotationalOffset = 180f;
            waitTime = 0;    
        }
        else if(waitTime <= 0.5)
            waitTime += Time.deltaTime;

        if (waitTime >= 0.5)
        {
            effector.rotationalOffset = 0;
        }
        if (player)
        {
            if (playerRB.velocity.y > 1)
                myCollider.enabled = false;
            else if (myCrackedIce)
                myCollider.enabled = !myCrackedIce.Fell;
            else
                myCollider.enabled = true;

           
        }      
    }

    bool CheckSwipeDown()
    {
        if(Input.touchCount > 0)
        {
            foreach(Touch touch in Input.touches)
            {
                if(touch.phase == TouchPhase.Began)
                {
                    touchDownPos = touch.position;
                    touchUpPos = touch.position;
                }

                if (touch.phase == TouchPhase.Ended)
                    touchUpPos = touch.position;

                Vector2 direction = touchUpPos - touchDownPos;
                float distance = Vector2.Distance(touchUpPos, touchDownPos);
                float angle = Vector2.SignedAngle(direction, Vector2.right);
                if (angle > 30 && angle < 150 && distance > 100) // and looking down + increase distance
                    return true;
                else
                    return false;
            }
        }
        return false;
    }
}
