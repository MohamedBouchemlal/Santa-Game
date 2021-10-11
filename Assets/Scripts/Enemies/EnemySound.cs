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
    [SerializeField] AudioSource myAS2;
    [SerializeField] AudioClip secondAttack;
    [SerializeField] AudioClip rangeAttack;
    [SerializeField] AudioClip secondRangeAttack;
    [SerializeField] AudioClip enrage;
    [SerializeField] AudioClip extraAudio;
    [SerializeField] AudioClip extraAudio2;
    [SerializeField] AudioClip extraAudio3;
    [SerializeField] AudioClip extraAudio4;
    [SerializeField] AudioClip[] extraRandomAudio;

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

    public void PlayEnrage()
    {
        myAS.PlayOneShot(enrage);
    }

    public void PlayExtraAudio()
    {
        myAS.PlayOneShot(extraAudio);
    }

    public void PlayExtraAudio2()
    {
        myAS.PlayOneShot(extraAudio2);
    }

    public void PlayExtraAudio3()
    {
        myAS.PlayOneShot(extraAudio3);
    }

    public void PlayExtraAudio4()
    {
        myAS.PlayOneShot(extraAudio4);
    }

    public void PlayExtraRandomAudios()
    {
        int index = UnityEngine.Random.Range(0, extraRandomAudio.Length);
        myAS.PlayOneShot(extraRandomAudio[index]);
    }

    public void PlaySecondAS()
    {
        myAS2.Play();
    }
    public void StopSecondAS()
    {
        myAS2.Stop();
    }
}
