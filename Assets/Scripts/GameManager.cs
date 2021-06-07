using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine.EventSystems;
using UnityEngine;
using System;


public class GameManager : Singleton<GameManager>
{
    [SerializeField] GameObject loadingScreen;
    [SerializeField] Animator anim;
    public string runTimePlatform;
    public string _currentLevel;
    public GameObject[] SystemPrefabs;
    public bool canInteract;

    List<GameObject> _instancedSystemPrefabs;
    List<AsyncOperation> _loadOperations;

    public static Action OnFadeInFadeOut;

    private void Start()
    {
        canInteract = true;
        DontDestroyOnLoad(gameObject);

        if (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.OSXPlayer)
            runTimePlatform = "Mobile";
        else
            runTimePlatform = "PC";

        _loadOperations = new List<AsyncOperation>();
        _instancedSystemPrefabs = new List<GameObject>();
        InstantiateSystemPrefabs();
        _currentLevel = string.Empty;     

        LoadLevel("Main Menu");
    }

    void OnLoadOperationComplete(AsyncOperation ao)
    {
        if (_loadOperations.Contains(ao))
        {
            _loadOperations.Remove(ao);
        }
        Debug.Log("Level operation is complete");
    }
    void OnUnLoadOperationComplete(AsyncOperation ao)
    {
        Debug.Log("Level operation is complete");
    }

    void InstantiateSystemPrefabs()
    {
        GameObject prefabInstance;
        for (int i=0; i<SystemPrefabs.Length; i++)
        {
            prefabInstance = Instantiate(SystemPrefabs[i]);
            Debug.Log(prefabInstance.name);
            _instancedSystemPrefabs.Add(prefabInstance);
        }
    }

    public void LoadLevel(string levelName)
    {
        loadingScreen.SetActive(true);
        AsyncOperation ao = SceneManager.LoadSceneAsync(levelName, LoadSceneMode.Additive);
        if(ao == null)
        {
            Debug.Log("[GameManager] Unable to laod " + levelName);
            return;
        }

        ao.completed += OnLoadOperationComplete;
        _loadOperations.Add(ao);
        _currentLevel = levelName;

        StartCoroutine(WaitForSceneToLoad());
    }
    public void UnLoadLevel(string levelName)
    {
        loadingScreen.SetActive(true); // maybe delete ? need to check on low end device
        AsyncOperation ao = SceneManager.UnloadSceneAsync(levelName);
        if (ao == null)
        {
            Debug.Log("[GameManager] Unable to unlaod " + levelName);
            return;
        }
        ao.completed += OnUnLoadOperationComplete;

        _currentLevel = string.Empty;
        OnFadeInFadeOut = null;
    }

    protected override void OnDestroy()
    {
        base.OnDestroy();
        if (_instancedSystemPrefabs.Count > 0)
        {
            for (int i = 0; i < _instancedSystemPrefabs.Count; i++)
                Destroy(_instancedSystemPrefabs[i]);
        }
        _instancedSystemPrefabs.Clear();
    }

    IEnumerator WaitForSceneToLoad()
    {
        canInteract = false;
        while (_loadOperations.Count > 0)
        {
            yield return null;
        }
        if (_currentLevel == "Main Menu")
            yield return new WaitForSeconds(2f);
        loadingScreen.SetActive(false);
        PlayFadeIn();
        canInteract = true;
    }

    //UI
    public void FadeInFadeOutAnimAction()
    {
        OnFadeInFadeOut?.Invoke();
        OnFadeInFadeOut = null;
    }

    public void PlayFadeInFadeOut()
    {
        anim.Play("FadeInFadeOut");
    }

    public void PlayFadeIn()
    {
        anim.Play("FadeIn");
    }
}
