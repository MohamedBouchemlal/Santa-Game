using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Door : MonoBehaviour
{

    [SerializeField] AudioSource myAS;
    PlayerCollision player;

    private void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player").GetComponent<PlayerCollision>();
    }

    public void OpenDoor()
    {
        if (player.HasKey)
        {
            myAS.Play();
            GetComponent<Animator>().Play("Door Open");
        }
    }

    public void KillDoor()
    {
        Destroy(gameObject);
    }
}
