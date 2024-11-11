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
    [SerializeField] Sprite act2UnlockedImage;
    [SerializeField] Button act3Button;
    [SerializeField] Sprite act3UnlockedImage;

    [Header("Gifts")]
    [SerializeField] GameObject[] smallLevelGifstUI;

    [Header("Settings Menu")]
    [SerializeField] GameObject settingsScreen;
    [SerializeField] Slider musicSlider;
    [SerializeField] Slider sfxSlider; //Should be Ambient

    [Header("GDPR && CCPA")]
    [SerializeField] GameObject GDPR_Panel;
    [SerializeField] GameObject GDPR_AgePanel;
    [SerializeField] TextMeshProUGUI age;
    [SerializeField] Slider ageSlider;
    private bool canTapScreen = false;
    
    [SerializeField] GameObject gainCoinButton;

    private void Awake()
    {
        if (!DataManager.Instance.gameDataSave.GDPR_IsShown)
        {
            GDPR_Panel.SetActive(true);
        }
        else
            canTapScreen = true;

        InvokeRepeating("StickShineAnimation", 0.1f, 2.5f);
        InvokeRepeating("StarsShineAnimation", 0.1f, 1.6f);
        tapToStart.transform.LeanScale(new Vector3(1.1f, 1.1f, 0), 0.6f).setLoopPingPong();
        buttonsPanel.SetActive(false);
        GameManager.OnFadeInFadeOut += DisplayButtons;
        SetLevelButtonsInteractability();
        SetCoinUI();
        SetLevelsGiftsUI();

        musicSlider.value = DataManager.Instance.gameDataSave.audio.musicVolume;
        sfxSlider.value = DataManager.Instance.gameDataSave.audio.sfxVolume;

        if (DataManager.Instance.gameDataSave.GDPR_IsShown)
        {
            //AdsGleyManager.Instance.OnRewardedVideoFinished += EarnExtraGold;
            //AdsGleyManager.Instance.OnRewardedVideoFinished += SetCoinUI;
        }
    }

    void Update()
    {
        if (Input.GetMouseButtonDown(0) && GameManager.Instance.canInteract && canTapScreen)
            GameManager.Instance.PlayFadeInFadeOut();

        if (!DataManager.Instance.gameDataSave.GDPR_IsShown)
            age.text = ageSlider.value.ToString();       
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
                    DisplaySettingsScreen();
                    break;

                    case "Settings_Ok":
                        Ok_SettingsScreen();
                        break;

                    case "Settings_Cancel":
                        Cancel_SettingsScreen();
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
        LeanTween.alphaCanvas(title, 0, 0.25f);
    }

    void DisplayPlayScreen()
    {
        //TweenFromAToB(buttonsPanel, playScreen);
        TweenFromAToB(buttonsPanel, adventuresScreen);
        
    }
    void Back_PlayScreen()
    {
        TweenFromAToB(adventuresScreen, buttonsPanel);
    }

    void DisplayAdventuresScreen()
    {
        TweenFromAToB(playScreen, adventuresScreen);       
    }
    void Back_AdventuresScreen()
    {
        //TweenFromAToB(adventuresScreen, playScreen);
        TweenFromAToB(adventuresScreen, buttonsPanel);
    }

    void DisplayActScreen(int index)
    {
        //GameObject buttons = adventuresScreen.transform.GetChild(1).gameObject;
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

    void DisplaySettingsScreen()
    {
        TweenFromAToB(buttonsPanel, settingsScreen);
        LeanTween.alphaCanvas(title, 0, 0.25f);
    }

    void Ok_SettingsScreen()
    {
        DataManager.Instance.gameDataSave.audio.musicVolume = musicSlider.value;
        DataManager.Instance.gameDataSave.audio.sfxVolume = sfxSlider.value;
        DataManager.Instance.Save();
        TweenFromAToB(settingsScreen, buttonsPanel);       
        //LeanTween.alphaCanvas(title, 1, 0.75f);
    }
    void Cancel_SettingsScreen()
    {
        TweenFromAToB(settingsScreen, buttonsPanel);
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

            if (i == 7 && !DataManager.Instance.gameDataSave.levelsData[i].Locked)//Need to check
            { 
                act2Button.interactable = true;
                act2Button.image.sprite = act2UnlockedImage;
                act2Button.transform.GetChild(1).gameObject.SetActive(false);
            }

            if (i == 14 && !DataManager.Instance.gameDataSave.levelsData[i].Locked) //Need to Check / Test
            {
                act3Button.interactable = true;
                act3Button.image.sprite = act3UnlockedImage;
                act3Button.transform.GetChild(1).gameObject.SetActive(false);
            }
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

    //SHOP
    public void GainExtraCoinsButton()
    {
        gainCoinButton.transform.LeanScale(new Vector3(1.06f, 1.06f, 0), 0.2f).setOnComplete(() =>
        {
            gainCoinButton.transform.LeanScale(new Vector3(1f, 1f, 0), 0.2f);
        });

        AdsGleyManager.Instance.ShowRewardedAd((bool finished) => { if (finished) EarnExtraGold(); SetCoinUI(); });
    }

    public void SetCoinUI()
    {
        nr_Coins_UI.text = DataManager.Instance.gameDataSave.coinsData.collectedCoins.ToString();
    }

    public void EarnExtraGold() {
        DataManager.Instance.gameDataSave.coinsData.collectedCoins += 100; //After rewarded video
        DataManager.Instance.Save();
    }

    private void OnDestroy()
    {
        GameManager.OnFadeInFadeOut -= DisplayButtons;
        if (DataManager.Instance.gameDataSave.GDPR_IsShown)
        {
            //AdsGleyManager.Instance.OnRewardedVideoFinished -= SetCoinUI;
            //AdsGleyManager.Instance.OnRewardedVideoFinished -= EarnExtraGold;
        }
    }

    //Delete LATER
    public void DELETESAVE()
    {
        DataManager.Instance.Delete();
    }

    //GDPR things
    public void ShowPrivacyPolicy()
    {
        if (GameManager.Instance.IsConnectedToInternet())
            Application.OpenURL("https://sites.google.com/view/bm2g/home");
        else
            Debug.Log("No internet");
    }

    public void GDPR_Agree()
    {
        //Yodo1U3dMas.SetCCPA(true);
        TweenFromAToB(GDPR_Panel, GDPR_AgePanel);

    }

    public void GDPR_Continue()
    {
        //if (ageSlider.value > 13)
        //    Yodo1U3dMas.SetCOPPA(false);
        //else
        //    Yodo1U3dMas.SetCOPPA(true);

        LeanTween.alphaCanvas(GDPR_AgePanel.GetComponent<CanvasGroup>(), 0, 0.25f);
        GDPR_AgePanel.SetActive(false);

        GameManager.Instance.canInteract = true;       
        GameManager.Instance.AdManager.SetActive(true);      
        canTapScreen = true;
        DataManager.Instance.gameDataSave.GDPR_IsShown = true;
        DataManager.Instance.Save();
    }

    
}
