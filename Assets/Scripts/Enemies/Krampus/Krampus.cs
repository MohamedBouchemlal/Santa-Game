using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Krampus : MonoBehaviour
{
    private Boss boss;
    private Attack punch;
    private Attack throwFire;
    private Attack jumpAttack;
    private Attack summonFlames;

    [SerializeField] Transform myArm;
    [SerializeField] float armRotationSpeed;
    private float angle;

    [Header("Projectiles")]
    [SerializeField] GameObject fire;
    [SerializeField] GameObject meteorFlame;
    [SerializeField] MeteorsPos[] meteorSpawnPos;

    private Animator anim;
    private bool enraged;

    //private bool rotateArm = false;
    //private float angle;

    [System.Serializable]
    public class MeteorsPos
    {
        public Transform[] Positions;
    }

    private void Start()
    {
        boss = GetComponent<Boss>();
        punch = boss.attackList[0];
        throwFire = boss.attackList[1]; ;
        jumpAttack = boss.attackList[2]; ;
        summonFlames = boss.attackList[3];

        anim = GetComponent<Animator>();
        enraged = false;
    }

    public void StartAnimation()
    {
        anim.SetTrigger("Start");
    }

    //Attack 1
    public void OnPunch()
    {
        Collider2D PL_Collider = Physics2D.OverlapCircle(punch.pos.position, punch.attackRange, boss.whoIsPlayer);
        if (PL_Collider)
            boss.playerBehavior.TakeDamage(punch.damage, boss.wholeBody.transform.localScale.x * Vector2.left, punch.force, boss.playerDamageType);
    }

    //Attack2
    //use in animation script
    //public void RotateArm()
    //{
    //    Vector2 direction = (boss._Player.transform.position + new Vector3(0f, -0.5f, 0f)) - myArm.position; //vector3 is offset of player's pos
    //    angle = Mathf.Atan2(direction.y, boss.lookingRight ? direction.x : -direction.x) * Mathf.Rad2Deg;

    //    Quaternion rotation = Quaternion.Euler(0f, 0f, angle + (boss.lookingRight ? -transform.rotation.eulerAngles.z : transform.rotation.eulerAngles.z));
    //    myArm.localRotation = Quaternion.Lerp(myArm.localRotation, rotation, armRotationSpeed * Time.deltaTime);
    //    Debug.Log(myArm.localRotation.z);
    //}

    public void OnThrowFire()
    {
        Vector2 fireDirection;
        Quaternion rotation;
        if (boss.lookingRight)
        {
            fireDirection = myArm.right;
            rotation = Quaternion.Euler(0f, 0f, myArm.rotation.eulerAngles.z + 180);
        }
        else
        {
            fireDirection = -myArm.right;
            rotation = Quaternion.Euler(0f, 0f, myArm.rotation.eulerAngles.z);
        }
        
        GameObject F = Instantiate(fire, throwFire.pos.position, rotation);
        F.GetComponent<Rigidbody2D>().velocity = 9 * fireDirection;
    }

    public void OnEnraged()
    {
        
    }

    public void OnJumpAttack()
    {
        Collider2D PL_Collider = Physics2D.OverlapCircle(jumpAttack.pos.position, jumpAttack.attackRange, boss.whoIsPlayer);
        if (PL_Collider)
            boss.playerBehavior.TakeDamage(jumpAttack.damage, boss.wholeBody.transform.localScale.x * Vector2.left, jumpAttack.force, boss.playerDamageType);

        CameraShaker.Instance.ShakeCamera(.7f, .25f, 0);
    }

    public void OnSummonFlames()//
    {
        CameraShaker.Instance.ShakeCamera(1f, .15f, 0);
        int r = Random.Range(0, meteorSpawnPos.Length+1);

        for (int i = 0; i < meteorSpawnPos[r].Positions.Length; i++)
            Instantiate(meteorFlame, meteorSpawnPos[r].Positions[i].position, Quaternion.identity);
        
        //SnowBall sBehavior = S.GetComponent<SnowBall>();
        //sBehavior.SetVariables(summonFlames.damage, 50, boss.wholeBody.localScale.x < 0 ? true : false);
        //S.transform.parent = null;
        // sBehavior.Push();
    }

}
