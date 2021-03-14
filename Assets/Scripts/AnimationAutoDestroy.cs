using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimationAutoDestroy : MonoBehaviour
{
    [SerializeField] string tag;
    ObjectPool objectPool;

    void Start()
    {
        objectPool = ObjectPool.Instance;
        //Destroy(gameObject, this.GetComponent<Animator>().GetCurrentAnimatorStateInfo(0).length + delay);        
    }

    public void BackToPool()
    {
        objectPool.returnToPool(tag, gameObject);
    }
}
