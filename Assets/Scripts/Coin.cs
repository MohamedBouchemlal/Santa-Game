using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Coin : MonoBehaviour
{
    private Transform myTransform;
    private CircleCollider2D m_CC;
    private bool firstDisabled = false;
    [SerializeField] Material coinMaterial;

    private void Awake()
    {
        myTransform = transform;
        m_CC = myTransform.GetChild(1).GetComponent<CircleCollider2D>();
        InvokeRepeating("CoinShineAnimation", 0.1f, 1.6f);
    }

    private void OnEnable()
    {
        if (firstDisabled)
        {
            m_CC.enabled = false;
            StartCoroutine(EnableCoinTrigger(0.6f, m_CC));
        }
        else
            firstDisabled = true;

    }

    IEnumerator EnableCoinTrigger(float time, CircleCollider2D collider)
    {
        yield return new WaitForSeconds(time);
        collider.enabled = true;
    }

    void CoinShineAnimation()
    {
        if(gameObject.active)
        StartCoroutine(CoinAnimationEnum(1.5f, coinMaterial));
    }

    IEnumerator CoinAnimationEnum(float waitTime, Material mat)
    {
        float elapsedTime = 0;
        mat.SetFloat("_ShineLocation", 0);
        while (elapsedTime < waitTime)
        {
            mat.SetFloat("_ShineLocation", Mathf.Lerp(0, 1, elapsedTime / waitTime));
            elapsedTime += Time.deltaTime;
            yield return null;
        }
    }
}
