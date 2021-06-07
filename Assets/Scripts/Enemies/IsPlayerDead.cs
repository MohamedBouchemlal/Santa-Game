using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IsPlayerDead : MonoBehaviour
{
    private bool isPlayerDead;
    public bool IsPLayerDead {get {return isPlayerDead;}}

    private void Start()
    {
        isPlayerDead = false;
        PlayerStatus.OnDeathEvent += PlayerIsDead;
        PlayerStatus.OnReviveEvent += PlayerIsNotDead;
    }

    public void PlayerIsDead()
    {
        isPlayerDead = true;
    }
    public void PlayerIsNotDead()
    {
        StartCoroutine(PlayerIsNotDeadDelay());
    }

    IEnumerator PlayerIsNotDeadDelay()
    {
        yield return new WaitForSeconds(1);
        isPlayerDead = false;
    }

    private void OnDestroy()
    {
        PlayerStatus.OnDeathEvent -= PlayerIsDead;
        PlayerStatus.OnReviveEvent -= PlayerIsNotDead;
    }
}
