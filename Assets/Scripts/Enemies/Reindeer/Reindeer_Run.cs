using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Reindeer_Run : StateMachineBehaviour
{
    private Boss boss;
    private ReindeerBoss reindeer;
    private Transform player;

    override public void OnStateEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        boss = animator.GetComponent<Boss>();
        player = GameObject.FindWithTag("Player").transform;
        reindeer = animator.GetComponent<ReindeerBoss>();
        reindeer.runHitCC2D.enabled = true;
        boss.speed += boss.speed * 0.6f;

        if (boss.goingRight)
            boss.wholeBody.localScale = new Vector3(-1, 1, 1);
        else
            boss.wholeBody.localScale = new Vector3(1, 1, 1);
    }

    override public void OnStateUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        reindeer.RunTowardsPlayer();

        if ((Vector2) boss.transform.position == reindeer.playerPos)
            reindeer.FinishRunHit();
    }

    override public void OnStateExit(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        //boss.attackCountdownTimer = boss.attackCountdown;
        boss.changePosCountdownTimer = UnityEngine.Random.Range(boss.changePosCountdownMin, boss.changePosCountdownMax);
        boss.movedToPlayer = true;
        reindeer.FinishRunHit();
        animator.ResetTrigger("Attack Close");
        animator.ResetTrigger("Attack Range");
        animator.ResetTrigger("Enraged");
    }
}
