using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MeteorShooter : MonoBehaviour
{
    [SerializeField] ParticleSystem shootingStar;
    [SerializeField] Transform[] pos;
    [SerializeField] float minWait, maxWait;
    float waitDuration;

    private void Start()
    {
        waitDuration = Random.Range(minWait, maxWait);
    }

    void Update()
    {
        if (waitDuration <= 0)
            ShootMeteor();
        else
            waitDuration -= Time.deltaTime;
    }

    void ShootMeteor()
    {
        Transform position = pos[Random.Range(0, pos.Length-1)];
        Instantiate(shootingStar, position);
        waitDuration = Random.Range(minWait, maxWait);
    }
}
