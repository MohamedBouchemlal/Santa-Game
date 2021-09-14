using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class Gift : MonoBehaviour
{
    [SerializeField] ParticleSystem giftParticle;
    public int ID; //ID so that gifts don't reappear
    private GameObject gift_UI;

    [Header("Audio")]
    [SerializeField] AudioSource myAS;

    private void OnEnable()
    {
        if (DataManager.Instance.gameDataSave.giftsData.GiftsIDs.Contains(ID))
            gameObject.SetActive(false);
    }

    void Awake()
    {
        gift_UI = GameObject.Find("Gift_Icon");      
    }

    public void MoveToUI()
    {
        StartCoroutine(IE_MoveToUI(0.7f));
        Instantiate(giftParticle, transform.position, Quaternion.identity);
        DataManager.Instance.gameDataSave.giftsData.GiftsIDs.Add(ID);
    }

    public void ShrinkUI()
    {
        myAS.Play();
        LeanTween.scale(gift_UI, new Vector3(1.7f, 1.7f, 1), 0.2f).setLoopPingPong(1).setOnComplete(() =>{
            LeanTween.scale(gift_UI, new Vector3(1, 1f, 1), 0.2f).setLoopPingPong(1);           
        });
        GetComponent<SpriteRenderer>().enabled = false;
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
        Destroy(gameObject, myAS.clip.length);
    }
}
