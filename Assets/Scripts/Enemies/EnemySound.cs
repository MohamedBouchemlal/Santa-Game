using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySound : MonoBehaviour
{
    [SerializeField] AudioSource myAS;

    [SerializeField] AudioClip takeSlashDamage;
    [SerializeField] AudioClip takeFinalSlashDamage;

    public void PlaySlashDamage()
    {
        myAS.PlayOneShot(takeSlashDamage);
    }
    public void PlayFinalSlashDamage()
    {
        myAS.PlayOneShot(takeFinalSlashDamage);
    }
}
