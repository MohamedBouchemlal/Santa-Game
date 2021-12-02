using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Lava : MonoBehaviour
{
    [SerializeField] float speed;
    Transform myTransform;
    private float lenght;
    private Camera cam;
    Vector2 startPos;
    Vector2 initialPos;
    Transform grandParent;

    private void Start()
    {
        myTransform = transform;
        startPos = transform.localPosition;
        lenght = GetComponent<SpriteRenderer>().bounds.size.x;
        cam = Camera.main;
        initialPos = startPos;
    }

    void Update()
    {
        myTransform.localPosition = new Vector3(startPos.x, myTransform.localPosition.y, 1);

        startPos.x -= speed * Time.deltaTime;
        

        if (startPos.x > initialPos.x + lenght*2)
            startPos.x = initialPos.x;
        else if (startPos.x < initialPos.x - lenght*2)
            startPos.x = initialPos.x;
    }
}
