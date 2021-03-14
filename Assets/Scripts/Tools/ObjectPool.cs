using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectPool : MonoBehaviour
{
    public static ObjectPool Instance;
    public Dictionary<string, Queue<GameObject>> poolDictionary;
    [System.Serializable]
    public class Pool
    {
        public string tag;
        public GameObject prefabObject;
        public int size;
    }
    public List<Pool> pools;

    void Awake()
    {
        Instance = this;    
    }

    private void Start()
    {
        poolDictionary = new Dictionary<string, Queue<GameObject>>();

        foreach (Pool pool in pools)
        {
            Queue<GameObject> objectPool = new Queue<GameObject>();
            for (int i = 0; i < pool.size; i++)
                AddObjectIn(pool, objectPool);
            poolDictionary.Add(pool.tag, objectPool);
        }
    }

    public GameObject Get(string tag)
    {
        if (poolDictionary.ContainsKey(tag))
        {
            if (poolDictionary[tag].Count == 0)
            {
                Pool p = new Pool();
                for (int i = 0; i < pools.Count; i++)
                {
                    if (pools[i].tag == tag)
                    {
                        p = pools[i];
                        break;
                    }
                }
                if (p != null)
                {
                    AddObjectIn(p, poolDictionary[tag]);
                }
                return poolDictionary[tag].Dequeue();
            }
            else
                return poolDictionary[tag].Dequeue();
        }
        Debug.Log("Tag not found !");
        return null;
    }

    public void returnToPool(string tag, GameObject pooledObject)
    {
        pooledObject.SetActive(false);
        poolDictionary[tag].Enqueue(pooledObject);
    }

    void AddObjectIn(Pool pool, Queue<GameObject> objectPool)
    {        
            GameObject newObject = Instantiate(pool.prefabObject);
            newObject.SetActive(false);
            objectPool.Enqueue(newObject);
    }
}
