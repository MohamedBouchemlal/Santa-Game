using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class GameManager : Singleton<GameManager>
{
    public string runTimePlatform;
    public string _currentLevel;
    public GameObject[] SystemPrefabs;
    List<GameObject> _instancedSystemPrefabs;

    List<AsyncOperation> _loadOperations;

    private void Start()
    {
        DontDestroyOnLoad(gameObject);

        if (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.OSXPlayer)
            runTimePlatform = "Mobile";
        else
            runTimePlatform = "PC";

        _currentLevel = string.Empty;
        _loadOperations = new List<AsyncOperation>();

        //LoadLevel("Level_1");
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
            _instancedSystemPrefabs.Add(prefabInstance);
        }
    }

    public void LoadLevel(string levelName)
    {
        AsyncOperation ao = SceneManager.LoadSceneAsync(levelName, LoadSceneMode.Additive);
        if(ao == null)
        {
            Debug.Log("[GameManager] Unable to laod " + levelName);
            return;
        }
        ao.completed += OnLoadOperationComplete;
        _loadOperations.Add(ao);

        _currentLevel = levelName;
    }
    public void UnLoadLevel(string levelName)
    {
        AsyncOperation ao = SceneManager.UnloadSceneAsync(levelName);
        if (ao == null)
        {
            Debug.Log("[GameManager] Unable to unlaod " + levelName);
            return;
        }
        ao.completed += OnUnLoadOperationComplete;
        _loadOperations.Add(ao);

        _currentLevel = string.Empty;
    }

    protected override void OnDestroy()
    {
        base.OnDestroy();
        for (int i = 0; i < _instancedSystemPrefabs.Count; i++)
            Destroy(_instancedSystemPrefabs[i]);
        _instancedSystemPrefabs.Clear();
    }
}
