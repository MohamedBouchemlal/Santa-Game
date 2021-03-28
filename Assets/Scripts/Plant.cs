using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Plant : MonoBehaviour
{

    Transform plant;
    [SerializeField] float bigRotation;
    [SerializeField] float smallRotation;
    [SerializeField] AnimationCurve curve;

    void Awake()
    {
        plant = transform.GetChild(0);
    }


    private void OnTriggerEnter2D(Collider2D collision)
    {
       GameObject interactor = collision.gameObject;

        float scaleVariable = plant.localScale.y - plant.localScale.y * 0.15f;  //0.15 scale off with 15%

       plant.LeanScaleY(scaleVariable, 0.25f).setLoopPingPong(1);
       if (interactor.transform.position.x - plant.position.x < 0){          
            plant.LeanRotateZ(-bigRotation, 0.25f).setLoopPingPong(1).setOnComplete(() => {
            plant.LeanRotateZ(smallRotation, 0.1f).setLoopPingPong(1); });
        }
        else
            plant.LeanRotateZ(bigRotation, 0.25f).setLoopPingPong(1).setOnComplete(() => {
            plant.LeanRotateZ(-smallRotation, 0.1f).setLoopPingPong(1); });
    }
}
