using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum PlayerDamageSound { Light_Hit, Heavy_Hit, Spike, Default }
public class PlayerSound : MonoBehaviour
{   
    [Header("Movement")]
    [SerializeField] AudioSource myAS;
    [SerializeField] AudioClip[] stepClips;
    [SerializeField] AudioClip[] landClips;
    [SerializeField] AudioClip jumpClip;

    [Header("Combat")]
    [SerializeField] AudioClip[] swordClips;
    [SerializeField] AudioClip shootClip;
    [SerializeField] AudioClip emptyShootClip;
    [SerializeField] AudioClip changeWeaponClip;
    [SerializeField] AudioClip reviveClip;

    [Header("Damage")]
    [SerializeField] AudioClip light_MeleeClip;
    [SerializeField] AudioClip heavy_MeleeClip;
    [SerializeField] AudioClip spikeClip;
    [SerializeField] AudioClip defaultClip;
    [SerializeField] AudioClip dieClip;

    [Header("Collisions")]
    [SerializeField] AudioClip coinClip;
    [SerializeField] AudioClip giftClip;
    [SerializeField] AudioClip healClip;
    [SerializeField] AudioClip energyClip;

    [Header("Transformation")]
    [SerializeField] AudioClip powerUpClip;
    [SerializeField] AudioSource superSantaAS;
    [SerializeField] AudioClip powerDownClip;
    [SerializeField] AudioClip stickShineClip;

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

    public void PlaySwordAttackSound()
    {
        int r = Random.Range(0, swordClips.Length);
        myAS.PlayOneShot(swordClips[r]);
    }

    public void PlayShootSound()
    {
        myAS.PlayOneShot(shootClip);
    }

    public void PlayEmptyShootSound()
    {
        myAS.PlayOneShot(emptyShootClip);
    }

    public void PlayChangeWeapon()
    {
        myAS.PlayOneShot(changeWeaponClip);
    }

    public void PlayDamageSound(PlayerDamageSound damageType)
    {
        switch (damageType)
        {
            case PlayerDamageSound.Light_Hit:
                myAS.PlayOneShot(light_MeleeClip);
                break;
            case PlayerDamageSound.Heavy_Hit:
                myAS.PlayOneShot(heavy_MeleeClip);
                break;
            case PlayerDamageSound.Spike:
                myAS.PlayOneShot(spikeClip);
                break;
            case PlayerDamageSound.Default:
                myAS.PlayOneShot(defaultClip);
                break;
        }
            
    }
    public void PlayDieSound()
    {
        myAS.PlayOneShot(dieClip);
    }

    public void PlayCoinSound()
    {
        myAS.PlayOneShot(coinClip);
    }

    public void PlayGiftSound()
    {
        myAS.PlayOneShot(giftClip);
    }

    public void PlayHealSound()
    {
        myAS.PlayOneShot(healClip);
    }

    public void PlayEnergySound()
    {
        myAS.PlayOneShot(energyClip);
    }

    public void PlayPowerUpSound()
    {
        myAS.PlayOneShot(powerUpClip);
    }

    public void PlaySuperSantaSound()
    {
        superSantaAS.Play();
    }

    public void StopSuperSantaSound()
    {
        StartCoroutine(ReduceVolume(superSantaAS, 2));
    }

    public void PlayReviveSound()
    {
        myAS.PlayOneShot(reviveClip);
    }

    public void PlayStickShineSound()
    {
        myAS.PlayOneShot(stickShineClip);
    }

    IEnumerator ReduceVolume(AudioSource AS, float duration)
    {
        float originalVolume = AS.volume;
        float elapsedTime = 0;

        while(duration > elapsedTime)
        {
            AS.volume = Mathf.Lerp(originalVolume, 0, elapsedTime/duration);
            elapsedTime += Time.deltaTime;
            //AS.volume -= (1/duration) * Time.deltaTime;
            yield return null;
        }
        AS.Stop();
        AS.volume = originalVolume;
        yield return null;
    }
}
