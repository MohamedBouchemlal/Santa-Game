using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class BossFightManager : MonoBehaviour
{
    public enum FightStage { Start, Happening, End};

    FightStage fightStage;
    
    [SerializeField] PlayerBehaviour player;

    [SerializeField] BoxCollider2D gameBorderLeft, gameBorderRight;
    [SerializeField] Transform worldCenter;

    [SerializeField] UnityEvent OnFightStart; //change camera //Start boss Intro Animation //Activate world colliders
    [SerializeField] UnityEvent OnFightEnd; //change camera back to player //Remove world colliders

    bool fightEnded;

    void Start()
    {
        fightStage = FightStage.Start;
        SetStageBorders(false);
        fightEnded = false;
    }

    private void Update()
    {
        if (fightStage == FightStage.End && !fightEnded)
        {
            OnFightEnd.Invoke();
            fightEnded = true;
            SetStageBorders(false);
        }
    }

    public void SetFightStage(FightStage fS)
    {
        fightStage = fS;
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.CompareTag("Player"))
        {
            OnFightStart.Invoke();           
            StartCoroutine(StopPlayerMovemet());
            GetComponent<BoxCollider2D>().enabled = false;
            //CameraFollow.Instance.SetMainTarget(worldCenter);   
            CameraShaker.Instance.ZoomInOnly(0.25f, 4);
            CameraShaker.Instance.SetLastTarget(worldCenter);
            fightStage = FightStage.Happening;
            SetStageBorders(true);
        }
    }

    public void SetStageBorders(bool b)
    {
        gameBorderLeft.enabled = b;
        gameBorderRight.enabled = b;
    }

    IEnumerator StopPlayerMovemet()
    {
        player.UnAllowJump();
        player.UnAllowMovement();
        player.UnAllowSwitch();
        player.enabled = false;
        yield return new WaitForSeconds(5);
        player.enabled = true;
        player.AllowJump();
        player.AllowMovement();
        player.AllowSwitch();
    }
}
