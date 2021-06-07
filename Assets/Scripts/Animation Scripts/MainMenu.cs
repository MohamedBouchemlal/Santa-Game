﻿using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine;

public class MainMenu : MonoBehaviour
{
    [SerializeField] Material stickMaterial;
    [SerializeField] Material starsMaterial;
    [SerializeField] Image blackPanel;
    [SerializeField] GameObject tapToStart;
    [SerializeField] GameObject buttonsPanel;
    [SerializeField] GameObject playScreen;
    [SerializeField] GameObject adventuresScreen;
    [SerializeField] GameObject upgradeScreen;
    [SerializeField] GameObject[] actScreens;


    private void Awake()
    {
        InvokeRepeating("StickShineAnimation", 0.1f, 2.5f);
        InvokeRepeating("StarsShineAnimation", 0.1f, 1.6f);
        tapToStart.transform.LeanScale(new Vector3(1.1f, 1.1f, 0), 0.6f).setLoopPingPong();
        buttonsPanel.SetActive(false);
        GameManager.OnFadeInFadeOut += DisplayButtons;
    }

    void Update()
    {
        if (Input.GetMouseButtonDown(0) && GameManager.Instance.canInteract)
            GameManager.Instance.PlayFadeInFadeOut();
    }

    public void OnButtonClicked(GameObject Button)
    {
        Button.transform.LeanScale(new Vector3(1.06f, 1.06f, 0), 0.2f).setOnComplete(() => {
            Button.transform.LeanScale(new Vector3(1f, 1f, 0), 0.2f);
            switch (Button.name)
            {
                case "Play":
                    DisplayPlayScreen();
                    break;

                    case "Adventures":
                    DisplayAdventuresScreen();
                    break;

                        case "Act 1":
                        DisplayActScreen(1);
                        break;                          

                        case "Act 2":
                        DisplayActScreen(2);
                        break;

                        case "Act 3":
                        DisplayActScreen(3);
                        break;

                        case "Back_Act":
                        Back_ActScreen();
                        break;

                        case "Back_Adventures":
                        Back_AdventuresScreen();
                        break;

                    case "Back_PlayScreen":
                    Back_PlayScreen();
                    break;

                case "Upgrade":
                    DisplayUpgradeScreen();
                    break;
                case "Back_Upgrade":
                    Back_UpgradeScreen();
                    break;

                case "Settings":
                    //do something
                    break;

                case "Exit":
                    Exit();
                    break;
            }
        });
           
    }

    //Buttons
    public void DisplayButtons()
    {
        tapToStart.SetActive(false);           
        buttonsPanel.SetActive(true);
        blackPanel.color = new Color(0, 0, 0, 0.7f);
    }

    void DisplayPlayScreen()
    {
        TweenFromAToB(buttonsPanel, playScreen);
    }
    void Back_PlayScreen()
    {
        TweenFromAToB(playScreen, buttonsPanel);
    }

    void DisplayAdventuresScreen()
    {
        TweenFromAToB(playScreen, adventuresScreen);
    }
    void Back_AdventuresScreen()
    {
        TweenFromAToB(adventuresScreen, playScreen);
    }

    void DisplayActScreen(int index)
    {
        GameObject buttons = adventuresScreen.transform.GetChild(1).gameObject;
        TweenFromAToB(buttons, actScreens[index - 1]);
    }
    void Back_ActScreen()
    {
        GameObject actScreen = null;
        GameObject buttons = adventuresScreen.transform.GetChild(1).gameObject;
        for (int i = 0; i < actScreens.Length; i++)
        {
            if (actScreens[i].active)
                actScreen = actScreens[i];
        }
        TweenFromAToB(actScreen, buttons);
    }

    void DisplayUpgradeScreen()
    {
        TweenFromAToB(playScreen, upgradeScreen);   
    }

    void Back_UpgradeScreen()
    {
        TweenFromAToB(upgradeScreen, playScreen);
    }

    void Exit()
    {
        Application.Quit();
    }

    public void LoadLevel(GameObject button)
    {
        if(SceneUtility.GetBuildIndexByScenePath(button.name) >= 0)
        {
            GameManager.Instance.UnLoadLevel("Main Menu");
            GameManager.Instance.LoadLevel(button.name);
        }
        else
            Debug.LogError("Scene " + button.name + " doesn't exist !");
    }  

    

    // Other functions

    void TweenFromAToB(GameObject GO_A, GameObject GO_B)
    {
        LeanTween.alphaCanvas(GO_A.GetComponent<CanvasGroup>(), 0, 0.25f).setOnComplete(() => {
            GO_A.SetActive(false);
            GO_B.SetActive(true);
            GO_B.GetComponent<CanvasGroup>().alpha = 0;
            LeanTween.alphaCanvas(GO_B.GetComponent<CanvasGroup>(), 1, 0.25f);
        });
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
