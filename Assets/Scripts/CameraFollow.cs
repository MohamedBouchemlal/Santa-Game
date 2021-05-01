using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraFollow : MonoBehaviour
{
    [SerializeField] Transform target;
    private Transform parent;
    private Transform initialTarget;
    private CharacterMovement playerMovement;
    [SerializeField] float smoothSpeed = 0.125f;
    private float currentSmoothSpeed;
    [SerializeField] Vector3 offset;
    private float offsetX;
    [SerializeField] float xSmoothSpeed = 0.125f;
    

    void Start(){
        initialTarget = target;
        offsetX = offset.x;
        currentSmoothSpeed = smoothSpeed;
        parent = transform.parent;
        parent.position = target.position + offset;
        playerMovement = initialTarget.GetComponent<CharacterMovement>();
    }

    void FixedUpdate()
    {
        if (!target)
            target = initialTarget;

        if(target.CompareTag("Player")){
            currentSmoothSpeed = smoothSpeed;

            if(!playerMovement.IsMoving()){
                offset.x = Mathf.Lerp(offset.x, 0, 0.05f);                 
            }
            else{
                if(playerMovement.IsFacingRight())
                   offset.x = Mathf.Lerp(offset.x, offsetX, xSmoothSpeed);              
                else
                    offset.x = Mathf.Lerp(offset.x, -offsetX, xSmoothSpeed);
            }                     
        }
        else{
            offset.x = 0f;
            currentSmoothSpeed = 0.1f;
        }

        Vector3 desiredPosition = target.position + offset;
        parent.position = Vector3.Lerp(parent.position, desiredPosition, currentSmoothSpeed);
    }


    public void SetTarget(Transform newTarget)
    {
        target = newTarget;
    }
}
