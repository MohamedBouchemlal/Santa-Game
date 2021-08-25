using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectAnimation : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField] float height;
    [SerializeField] float time;
    [SerializeField] float angle;


    private void OnEnable()
    {
        if (!gameObject.GetComponent<Rigidbody2D>())
        {
            float Y = transform.position.y;
            LeanTween.moveY(gameObject, Y + height, time).setLoopPingPong();
        }
        LeanTween.rotateY(gameObject, angle, time).setLoopPingPong();
    }
}
