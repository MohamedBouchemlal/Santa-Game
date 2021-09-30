using System;
using System.Collections;
using TMPro;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine;

public class MainMenu : MonoBehaviour
{
    [SerializeField] CanvasGroup title;
    [SerializeField] Material stickMaterial;
    [SerializeField] Material starsMaterial;
    [SerializeField] Image blackPanel;
    [SerializeField] GameObject tapToStart;
    [SerializeField] GameObject buttonsPanel;
    [SerializeField] GameObject playScreen;
    [SerializeField] GameObject adventuresScreen;
    [SerializeField] GameObject upgradeScreen;
    [SerializeField] GameObject[] actScreens;

    [Header("Buttons")]
    [SerializeField] TextMeshProUGUI nr_Coins_UI;
    [SerializeField] Button[] levelButton;
    [SerializeField] Button act2Button;
    [SerializeField] Button act3Button;

    [Header("Gifts")]
    [SerializeField] GameObject[] smallLevelGifstUI;

    private void Awake()
    {
        //DELETE
        //DataManager.Instance.gameDataSave.levelsData[7].Locked = false; //DELETE
        //DELETE
        InvokeRepeating("StickShineAnimation", 0.1f, 2.5f);
        InvokeRepeating("StarsShineAnimation", 0.1f, 1.6f);
        tapToStart.transform.LeanScale(new Vector3(1.1f, 1.1f, 0), 0.6f).setLoopPingPong();
        buttonsPanel.SetActive(false);
        GameManager.OnFadeInFadeOut += DisplayButtons;
        SetLevelButtonsInteractability();
        SetCoinUI();
        SetLevelsGiftsUI();
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
        //TweenFromAToB(buttonsPanel, playScreen);
        TweenFromAToB(buttonsPanel, adventuresScreen);
        LeanTween.alphaCanvas(title, 0, 0.25f);
    }
    void Back_PlayScreen()
    {
        TweenFromAToB(adventuresScreen, buttonsPanel);
    }

    void DisplayAdventuresScreen()
    {
        TweenFromAToB(playScreen, adventuresScreen);
        LeanTween.alphaCanvas(title, 0, 0.25f);
        
    }
    void Back_AdventuresScreen()
    {
        //TweenFromAToB(adventuresScreen, playScreen);
        TweenFromAToB(adventuresScreen, buttonsPanel);
        LeanTween.alphaCanvas(title, 1, 0.75f);
    }

    void DisplayActScreen(int index)
    {
        GameObject buttons = adventuresScreen.transform.GetChild(1).gameObject;
        //TweenFromAToB(buttons, actScreens[index - 1]);
        TweenFromAToB(adventuresScreen, actScreens[index - 1]);
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
        //TweenFromAToB(actScreen, buttons);
        TweenFromAToB(actScreen, adventuresScreen);
    }

    void DisplayUpgradeScreen()
    {
        TweenFromAToB(adventuresScreen, upgradeScreen);
        //LeanTween.alphaCanvas(title, 0, 0.25f);
    }

    void Back_UpgradeScreen()
    {
        TweenFromAToB(upgradeScreen, adventuresScreen);
        //LeanTween.alphaCanvas(title, 1, 0.75f);
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

    //Interactability of level buttons
    void SetLevelButtonsInteractability()
    {
        for (int i = 0; i < levelButton.Length; i++)
        {
            if (!DataManager.Instance.gameDataSave.levelsData[i].Locked)
            {
                levelButton[i].interactable = true;
                levelButton[i].transform.GetChild(0).gameObject.SetActive(true);
                if (levelButton[i].transform.childCount >= 2)
                levelButton[i].transform.GetChild(1).gameObject.SetActive(false);
            }
            else
                levelButton[i].interactable = false;

            if (i == 7 && !DataManager.Instance.gameDataSave.levelsData[i].Locked) //Need to check
                act2Button.interactable = true;

            if (i == 13 && !DataManager.Instance.gameDataSave.levelsData[i].Locked) //Need to Check / Test
                act3Button.interactable = true;
        }
    }

    void SetLevelsGiftsUI()
    {
        for(int i=0; i< smallLevelGifstUI.Length; i++)
        {
            if (DataManager.Instance.gameDataSave.giftsData.GiftsIDs.Contains(i + 1))
                smallLevelGifstUI[i].SetActive(true);                  
        }
    }

    public void SetCoinUI()
    {
        nr_Coins_UI.text = DataManager.Instance.gameDataSave.coinsData.collectedCoins.ToString();
    }

    //Delete LATER
    public void DELETESAVE()
    {
        DataManager.Instance.Delete();
    }
}
