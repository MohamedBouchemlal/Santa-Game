using System.Collections;
using UnityEngine.UI;
using TMPro;
using System;
using UnityEngine;

public class UIManager : Singleton<UIManager>
{
    [SerializeField] TextMeshProUGUI nr_Gifts_UI;
    [SerializeField] TextMeshProUGUI nr_Coins_UI;
    [SerializeField] GameObject coinIcon;
    private Vector3 coinAnimationScale = new Vector3(1.5f, 1.5f, 0);

    [SerializeField] GameObject gameOverPanel;
    [SerializeField] GameObject levelCompletePanel;
    [SerializeField] GameObject levelCompleteBossPanel;

    [Header("Unlockable Buttons")]
    [SerializeField] GameObject switchButton;
    [SerializeField] GameObject PowerUpButton;
    [SerializeField] GameObject energyBar;

    [Header("Attack Images")]
    [SerializeField] Button attackButton;
    [SerializeField] Sprite swordIcon;
    [SerializeField] Sprite gunIcon;

    [Header("Level Complete")]
    [SerializeField] TextMeshProUGUI nr_Coins_Complete_UI;
    [SerializeField] GameObject[] Gifts;
    [SerializeField] int[] giftsID;
    [SerializeField] ParticleSystem[] particleS;
    [SerializeField] AudioSource myAS;
    [SerializeField] bool IsBossLevel = false;

    private Image darkCanvas;

    protected override void Awake()
    {
        base.Awake();
        darkCanvas = GameObject.Find("Dark Canvas").transform.GetChild(0).GetComponent<Image>();
        CheckLockedButtons();
    }

    public void UpdateGiftUI(int giftNumber, int maxGiftNumber)
    {
        nr_Gifts_UI.text = giftNumber.ToString() + "/" + maxGiftNumber.ToString();        
    }

    public void UpdateCoinUI(int coinNumber)
    {
        nr_Coins_UI.text = coinNumber.ToString();
        LeanTween.scale(coinIcon, coinAnimationScale, 0.1f).setLoopPingPong(1).setOnComplete(()=>{
            LeanTween.scale(coinIcon, Vector3.one, 0.1f);
        });
    }

    public void UpdateCoinUIOnStart(int coinNumber)
    {
        nr_Coins_UI.text = coinNumber.ToString();
    }

    public void GameOver() //function did have parameter bool _continue
    {
        //if (_continue)
        GameOver_Continue();
        //else
        //    GameOver_Retry();
    }

   void GameOver_Continue()
    {
        gameOverPanel.SetActive(true);
        CanvasGroup CG = gameOverPanel.GetComponent<CanvasGroup>();
        CG.alpha = 0;
        CG.LeanAlpha(1, 0.25f);
        //gameOverPanel.transform.GetChild(0).gameObject.SetActive(true);
        //gameOverPanel.transform.GetChild(1).gameObject.SetActive(false);
    }

    void GameOver_Retry()
    {
        gameOverPanel.SetActive(true);
        gameOverPanel.transform.GetChild(1).gameObject.SetActive(true);
        gameOverPanel.transform.GetChild(0).gameObject.SetActive(false);
    }

    public void Button_Continue()
    {
        gameOverPanel.SetActive(false);
    }
    public void Button_Retry()
    {
        string myLevel = GameManager.Instance._currentLevel;
        GameManager.Instance.UnLoadLevel(myLevel);
        GameManager.Instance.LoadLevel(myLevel);
    }
    public void Button_NextLevel(int level)
    {
        string myLevel = GameManager.Instance._currentLevel;
        GameManager.Instance.UnLoadLevel(myLevel);
        GameManager.Instance.LoadLevel("Level "+ level);
    }

    public void Button_Home()
    {
        string myLevel = GameManager.Instance._currentLevel;
        GameManager.Instance.UnLoadLevel(myLevel);
        GameManager.Instance.LoadLevel("Main Menu");
    }

    public void DisplayLevelComplete()
    {
        if (IsBossLevel)
        {
            levelCompleteBossPanel.SetActive(true);
            CanvasGroup CG = levelCompleteBossPanel.GetComponent<CanvasGroup>();
            CG.alpha = 0;
            CG.LeanAlpha(1, 0.4f);
        }
        else
        {
            levelCompletePanel.SetActive(true);
            CanvasGroup CG = levelCompletePanel.GetComponent<CanvasGroup>();
            CG.alpha = 0;
            CG.LeanAlpha(1, 0.4f);
            nr_Coins_Complete_UI.text = nr_Coins_UI.text;                    

            for (int i = 0; i < giftsID.Length; i++)
            {
                if (DataManager.Instance.gameDataSave.giftsData.GiftsIDs.Contains(giftsID[i]))
                    Gifts[i].SetActive(true);
                else
                    Gifts[i].SetActive(false);
            }
        }
        myAS.Play();
        foreach (ParticleSystem ps in particleS)
            ps.Play();
    }

    public void DarkenDarkCanvas()
    {
        StartCoroutine(LerpColor(5f, 0.6f));
    }

    public void LightenDarkCanvas()
    {
        StartCoroutine(LerpColor(5f, 0.17f));
    }

    public void CheckLockedButtons()
    {
        if (DataManager.Instance.gameDataSave.playerData.rangeWeapon)
        {
            switchButton.SetActive(true);
            energyBar.SetActive(true);
        }
        else
        {
            switchButton.SetActive(false);
            energyBar.SetActive(true);
        }

        if (DataManager.Instance.gameDataSave.playerData.powerUp)
            PowerUpButton.SetActive(true);
        else
            PowerUpButton.SetActive(false);
    }

    public void SwitchAttackUI(WeaponState wpState)
    {
        if (wpState == WeaponState.MELEE)
            attackButton.image.sprite = swordIcon;
        else if (wpState == WeaponState.RANGE)
            attackButton.image.sprite = gunIcon;
    }

    IEnumerator LerpColor(float waitTime, float alpha)
    {
        float elapsedTime = 0;
        Color darkC = new Color(0,0,0,alpha);
        while(elapsedTime < waitTime)
        {
            darkCanvas.color = Color.Lerp(darkCanvas.color, darkC, elapsedTime / waitTime);
            elapsedTime += Time.deltaTime;
            yield return null;
        }
    }
}
