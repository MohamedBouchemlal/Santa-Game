using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySound : MonoBehaviour
{
    [SerializeField] AudioSource myAS;

    [SerializeField] AudioClip attack;
    [SerializeField] AudioClip takeSlashDamage;
    [SerializeField] AudioClip takeFinalSlashDamage;
    [Header("For Bosses")]
    [SerializeField] AudioClip secondAttack;
    [SerializeField] AudioClip rangeAttack;
    [SerializeField] AudioClip secondRangeAttack;
    [SerializeField] AudioClip enrage;
    [SerializeField] AudioClip extraAudio;

    public void PlayAttack()
    {
        myAS.PlayOneShot(attack);
    }

    public void PlaySlashDamage()
    {
        myAS.PlayOneShot(takeSlashDamage);
    }
    public void PlayFinalSlashDamage()
    {
        myAS.PlayOneShot(takeFinalSlashDamage);
    }

    public void PlaySecondAttack()
    {
        myAS.PlayOneShot(secondAttack);
    }

    public void PlayRangeAttack()
    {
        myAS.PlayOneShot(rangeAttack);
    }

    public void PlaySecondRangeAttack()
    {
        myAS.PlayOneShot(secondRangeAttack);
    }

    public void PlayExtraAudio()
    {
        myAS.PlayOneShot(extraAudio);
    }

    public void PlayEnrage()
    {
        myAS.PlayOneShot(enrage);
    }
}
