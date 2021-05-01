using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine;

public class MainMenu : MonoBehaviour
{
    [SerializeField] Material stickMaterial;
    [SerializeField] Material starsMaterial;
    [SerializeField] GameObject tapToStart;
    [SerializeField] Image transitionPanel;
    [SerializeField] GameObject buttonsPanel;
    [SerializeField] Animator anim;

    private void OnEnable()
    {
        anim.Play("FadeIn");
    }
    private void Awake()
    {
        InvokeRepeating("StickShineAnimation", 0.1f, 2.5f);
        InvokeRepeating("StarsShineAnimation", 0.1f, 1.6f);
        tapToStart.transform.LeanScale(new Vector3(1.1f, 1.1f, 0), 0.6f).setLoopPingPong();
        buttonsPanel.SetActive(false);
    }

    void Update()
    {
        if (Input.GetMouseButtonDown(0))
            anim.Play("FadeInFadeOut");
    }

    public void DisplayButtons()
    {
        buttonsPanel.SetActive(true);
        tapToStart.SetActive(false);
    }

    public void OnButtonClicked(GameObject Button)
    {
        Button.transform.LeanScale(new Vector3(1.1f, 1.1f, 0), 0.2f).setOnComplete(()=> { SceneManager.LoadScene("Level_1"); });
    }

    void StickShineAnimation()
    {
        StartCoroutine(ShineAnimationEnum(0.5f, stickMaterial));
    }
    void StarsShineAnimation()
    {
        StartCoroutine(ShineAnimationEnum(1.5f, starsMaterial));
    }

    IEnumerator ShineAnimationEnum(float waitTime, Material mat)
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
