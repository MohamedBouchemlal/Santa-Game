using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Coin : MonoBehaviour
{
    private Transform myTransform;
    private CircleCollider2D m_CC;
    private bool firstDisabled = false;

    private void Awake()
    {
        myTransform = transform;
        m_CC = myTransform.GetChild(1).GetComponent<CircleCollider2D>();
    }

    private void OnEnable()
    {
        if (firstDisabled)
        {
            m_CC.enabled = false;
            StartCoroutine(EnableCoinTrigger(1f, m_CC));
        }
        else
            firstDisabled = true;

    }

    IEnumerator EnableCoinTrigger(float time, CircleCollider2D collider)
    {
        yield return new WaitForSeconds(time);
        collider.enabled = true;
    }
}
