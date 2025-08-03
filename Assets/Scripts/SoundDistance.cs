using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundDistance : MonoBehaviour
{
    GameObject player;
    public float soundDistance = 5;
    AudioSource mySound;
    bool soundPlayed;
    LevelManager levelManager;

    void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player");
        levelManager = GameObject.FindObjectOfType<LevelManager>();
        mySound = GetComponent<AudioSource>();

        levelManager.OnContinue.AddListener(() =>
        {
            player = GameObject.FindGameObjectWithTag("Player");
        });
    }

    void Update()
    {
        if (player == null)
            return;
        if (Vector2.Distance(transform.position, player.transform.position) < soundDistance)
        {
            float distance = Vector2.Distance(transform.position, player.transform.position); // Current distance between player and "this" Object
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
        Gizmos.DrawWireSphere(transform.position, soundDistance);
    }
}
