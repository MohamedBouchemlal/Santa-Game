using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Krampus_ThrowFire : StateMachineBehaviour
{
   
    private Boss boss;
    private Krampus krampus;

    override public void OnStateEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        krampus = animator.GetComponent<Krampus>();
        boss = animator.GetComponent<Boss>();
    }

    override public void OnStateUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {      
        boss.CheckPlayersLocation();
    }

    override public void OnStateExit(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {

    }

}
