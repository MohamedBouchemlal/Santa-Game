using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Parallax : MonoBehaviour
{
    private float lenght;
    private Camera cam;
    public Vector2 parallaxEffect;
    Vector2 startPos;

    void Awake()
    {
        cam = Camera.main;
        startPos = transform.position;
        lenght = GetComponent<SpriteRenderer>().bounds.size.x;
    }

    void Update()
    {
        float temp = cam.transform.position.x * (1 - parallaxEffect.x);
        Vector2 distance = new Vector2 (cam.transform.position.x * parallaxEffect.x, cam.transform.position.y * parallaxEffect.y);

        transform.position = new Vector3(distance.x + startPos.x, distance.y + startPos.y, transform.position.z);

        if (temp > startPos.x + lenght)
            startPos.x += lenght;
        else if (temp < startPos.x - lenght)
            startPos.x -= lenght;
    }
}
