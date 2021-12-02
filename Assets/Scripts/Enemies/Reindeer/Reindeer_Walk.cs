using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Reindeer_Walk : StateMachineBehaviour
{
    private Boss boss;
    private Transform player;
    private bool isReindeer;

    override public void OnStateEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        isReindeer = animator.GetComponent<ReindeerBoss>();

        boss = animator.GetComponent<Boss>();
        player = GameObject.FindWithTag("Player").transform;

        if (boss.goingRight)
            boss.wholeBody.localScale = new Vector3(-1, 1, 1);
        else
            boss.wholeBody.localScale = new Vector3(1, 1, 1);
    }

    override public void OnStateUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        boss.Move();

        if (!boss.isPLayerDeadScript.IsPLayerDead)
        {
            if (Vector2.Distance(player.position, animator.transform.position) <= boss.attackList[0].distanceToAttack && boss.attackCountdownTimer <= 0)
            {
                animator.SetTrigger("Attack Close");
                Debug.Log("hit bitch");
            }
            if (Vector2.Distance(player.position, animator.transform.position) >= boss.attackList[1].distanceToAttack && boss.attackCountdownTimer <= 0)
            {
                animator.SetTrigger("Attack Range");
                if (isReindeer)
                    animator.SetBool("IsRunning", true);
            }
        }
        if(!boss.isMoving)
            animator.SetBool("IsWalking", false);
    }

    override public void OnStateExit(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        animator.ResetTrigger("Attack Close");
        animator.ResetTrigger("Attack Range");
        animator.ResetTrigger("Enraged");
        if(isReindeer)
            boss.attackCountdownTimer = boss.attackCountdown;
    }
}
