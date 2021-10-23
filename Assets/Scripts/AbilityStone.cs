using System.Collections;
using System.Collections.Generic;
using UnityEngine.Events;
using UnityEngine;

public class AbilityStone : MonoBehaviour
{
    [SerializeField] Animator anim;
    [SerializeField] UnityEvent OnInteraction;
    [SerializeField] GameObject powerAura;
    [SerializeField] Transform stickPos;
    [SerializeField] ParticleSystem fallingRocks;
    private PlayerBehaviour player;
    private BoxCollider2D bC2D;
    private StormController sC;
    [Header("Audio")]
    [SerializeField] AudioSource myAS;
    [SerializeField] AudioClip shakeClip;
    [SerializeField] AudioClip grantAbility;
    [SerializeField] AudioClip stoneFallingClip;

    void Awake()
    {
        player = FindObjectOfType<PlayerBehaviour>();
        bC2D = GetComponent<BoxCollider2D>();
        sC = FindObjectOfType<StormController>();
    
        switch (gameObject.name)
        {
            case "Ability Gun":
                if (DataManager.Instance.gameDataSave.playerData.rangeWeapon)
                    Destroy(gameObject);
                break;
            //case "Ability DoubleJump":
            //    if (DataManager.Instance.gameDataSave.playerData.doubleJump)
            //        Destroy(gameObject);
            //    break;
            case "Ability PowerUp":
                if (DataManager.Instance.gameDataSave.playerData.powerUp)
                    Destroy(gameObject);
                break;
        }
    }


    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Player"))
        {
            if (sC)
                sC.enabled = false;

            bC2D.enabled = false;
            ConstrainPlayer(true);

            StartCoroutine(InteractEnum());                     
        }
    }

    IEnumerator InteractEnum()
    {
        UIManager.Instance.DarkenDarkCanvas();
        CameraShaker.Instance.ZoomIn(0.5f, transform, 3.5f);
        yield return new WaitForSeconds(1.5f);
        PlayShakeSound();
        yield return new WaitForSeconds(0.25f);
        anim.Play("Shake");
        yield return new WaitForSeconds(1.25f);
        OnInteraction.Invoke(); // Will change after coding save system
        yield return new WaitForSeconds(1.5f);
        GiveAbility();
        anim.Play("PowerFades");
        yield return new WaitForSeconds(3f);
        anim.Play("Break");
    }

    public void PlayShakeSound()
    {
        myAS.PlayOneShot(shakeClip);
    }

    public void PlayGrantAbilitySound()
    {
        myAS.PlayOneShot(grantAbility);
    }

    public void PlayStoneFallingSound()
    {
        myAS.PlayOneShot(stoneFallingClip);
    }

    public void DestroyStone()
    {
        player.FinishAcquiringAbility();
        CameraShaker.Instance.ZoomOut(0.4f);
        UIManager.Instance.LightenDarkCanvas();
        
        ConstrainPlayer(false);

        if (sC)
            sC.enabled = true;
        UIManager.Instance.CheckLockedButtons();
        Destroy(gameObject);
    }

    // Used in Animation
    public void Break()
    {
        fallingRocks.Play();        
    }

    void ConstrainPlayer(bool contrain)
    {
        if (contrain)
        {
            player.UnAllowJump();
            player.UnAllowMovement();
            player.UnAllowSwitch();
            player.enabled = false;
        }
        else
        {
            player.enabled = true;
            player.AllowJump();
            player.AllowMovement();
            player.AllowSwitch();           
        }
    }

    public void GiveAbility()
    {
        Vector3 pos = stickPos.position + new Vector3(0, 0.2f, 0);
        powerAura.LeanMove(pos, 1f).setDestroyOnComplete(true);
    }
}
