using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySound : MonoBehaviour
{
    [SerializeField] AudioSource myAS;

    [SerializeField] AudioClip attack;
    [SerializeField] AudioClip takeSlashDamage;
    [SerializeField] AudioClip takeFinalSlashDamage;

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
}
