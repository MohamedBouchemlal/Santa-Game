using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class Gift : MonoBehaviour
{
    public ParticleSystem giftParticle;
    private GameObject gift_UI;

    void Awake()
    {
        gift_UI = GameObject.Find("Gift_Image");
    }

    public void MoveToUI()
    {
        StartCoroutine(IE_MoveToUI(0.7f));
        Instantiate(giftParticle, transform.position, Quaternion.identity);
    }

    public void ShrinkUI()
    {
        LeanTween.scale(gift_UI, new Vector3(1.7f, 1.7f, 1), 0.2f).setLoopPingPong(1).setOnComplete(() =>
            LeanTween.scale(gift_UI, new Vector3(1, 1f, 1), 0.2f).setLoopPingPong(1)
        );
    }

    public IEnumerator IE_MoveToUI(float waitTime)
    {
        float elapsedTime = 0;
        Vector2 currentPos = (Vector2)transform.position;
        while (elapsedTime < waitTime)
        {
            transform.position = Vector2.Lerp(currentPos, gift_UI.transform.position, elapsedTime / waitTime);
            elapsedTime += Time.deltaTime;
            yield return null;
        }
        ShrinkUI();
        Destroy(gameObject);
        yield return null;
    }
    //make rotating wood rotating spikes like in Ori
}
