using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Emission : MonoBehaviour
{
    private Material my_Material;
    private Color my_Color;
    private Color newColor;
    [SerializeField] [Range(0, 1f)] float intensity;

    void Start()
    {
        my_Material = GetComponent<SpriteRenderer>().sharedMaterial;
        my_Color = my_Material.color;       
    }

    void Update()
    {
       // newColor = new Color(my_Color.r, my_Color.g, my_Color.b, intensity);
        my_Material.SetFloat("_Alpha", intensity);
    }
}
