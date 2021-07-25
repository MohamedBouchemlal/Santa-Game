using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundDistance : MonoBehaviour
{
    GameObject player;
    public float soundDistance = 5;
    AudioSource mySound;
    bool soundPlayed;

    void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player");
        mySound = this.GetComponent<AudioSource>();
    }

    void Update()
    {
        if(Vector2.Distance(this.transform.position, player.transform.position) < soundDistance)
        {
            float distance = Vector2.Distance(this.transform.position, player.transform.position); // Current distance between player and "this" Object
            float volume = 1 - distance / soundDistance; // distance / soundDistance = value between (0,1). Then 1 - value = volume between (1,0)
            mySound.volume = volume;                    // volume = 1 meanse so close, volume = 0 means distance is >= 5 (which is soundDistance)
            if (!soundPlayed)
            {
                soundPlayed = true;
            }           
        }
        else
        {
            soundPlayed = false;
            mySound.volume = 0f;
        }
    }

    private void OnDrawGizmos()
    {
        Gizmos.DrawWireSphere(this.transform.position, soundDistance);
    }
}
