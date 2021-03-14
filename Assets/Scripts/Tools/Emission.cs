using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[ExecuteInEditMode]
public class Emission : MonoBehaviour
{
    private Material my_Material;
    [SerializeField] [Range(-1f, 40f)] float intensivity;

    void Start()
    {
        my_Material = this.GetComponent<SpriteRenderer>().material;
        my_Material.SetFloat("_Emission", intensivity);
        this.enabled = false;
    }


    void Update()
    {
        my_Material.SetFloat("_Emission", intensivity);
    }
}
