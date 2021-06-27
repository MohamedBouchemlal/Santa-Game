using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerSound : MonoBehaviour
{
    [Header("Movement")]
    [SerializeField] AudioSource myAS;
    [SerializeField] AudioClip[] stepClips;
    [SerializeField] AudioClip[] landClips;
    [SerializeField] AudioClip jumpClip;

    [Header("Combat")]
    [SerializeField] AudioClip[] swordClips;

    [Header("Collisions")]
    [SerializeField] AudioClip coinClip;


    public void PlayStepSound()
    {
        int r = Random.Range(0, stepClips.Length-1);
        myAS.PlayOneShot(stepClips[r]);
    }

    public void PlayLandingSound()
    {
        int r = Random.Range(0, landClips.Length-1);
        myAS.PlayOneShot(landClips[r]);
    }

    public void PlayJumpSound()
    {
        myAS.PlayOneShot(jumpClip);
    }
    public void PlayCoinSound()
    {
        myAS.PlayOneShot(coinClip);
    }

    public void PlaySwordAttackSound()
    {
        int r = Random.Range(0, swordClips.Length);
        myAS.PlayOneShot(swordClips[r]);
    }
}
