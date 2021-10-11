using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SnowBallTrigger : MonoBehaviour
{
    [SerializeField] SnowBall mySnowBall;

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Player"))
        {
            Debug.Log(gameObject.name);
            mySnowBall.Push();
            GetComponent<Collider2D>().enabled = false;
            
        }
        // Camera return to center after death + 2.5 in atttack countdown
    }
}
