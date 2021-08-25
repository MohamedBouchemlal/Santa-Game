using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SnowMonsterBoss_Idle : StateMachineBehaviour
{
    private Boss boss;
    private SnowMonsterBoss myBehavior;
    private Transform player;    

    override public void OnStateEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        boss = animator.GetComponent<Boss>();
        myBehavior = animator.GetComponent<SnowMonsterBoss>();
        player = GameObject.FindWithTag("Player").transform;
    }

    override public void OnStateUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        boss.CheckPlayersLocation();
        myBehavior.Move();

        if (!boss.isPLayerDeadScript.IsPLayerDead)
        {
            if (Vector2.Distance(player.position, animator.transform.position) <= 2.25f && boss.attackCountdownTimer <= 0)
                animator.SetTrigger("Attack Close");
            if (Vector2.Distance(player.position, animator.transform.position) >= 8 && boss.attackCountdownTimer <= 0)
                animator.SetTrigger("Attack Range");
        }                
    }

    override public void OnStateExit(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        animator.ResetTrigger("Attack Close");
        animator.ResetTrigger("Attack Range");
        animator.ResetTrigger("Enraged");
        boss.attackCountdownTimer = boss.attackCountdown;
    }

}
