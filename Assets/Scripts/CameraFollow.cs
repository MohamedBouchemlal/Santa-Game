using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraFollow : MonoBehaviour
{
    [SerializeField] Transform target;
    private Transform parent;
    private Transform mainTarget;
    private CharacterMovement playerMovement;
    [SerializeField] float smoothSpeed = 0.125f;
    private float currentSmoothSpeed;
    [SerializeField] Vector3 offset;
    private float offsetX;
    private float offsetY;
    [SerializeField] float xSmoothSpeed = 0.125f;

    public static CameraFollow Instance;

    void Awake()
    {
        mainTarget = target;
        offsetX = offset.x;
        offsetY = offset.y;
        currentSmoothSpeed = smoothSpeed;
        parent = transform.parent;
        parent.position = target.position + offset;
        playerMovement = FindObjectOfType<CharacterMovement>();

        Instance = this;
    }

    void FixedUpdate()
    {
        if (!target)
            target = mainTarget;

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
            if(!Mathf.Approximately(offset.y, offsetY))
                offset.y = Mathf.Lerp(offset.y, offsetY, xSmoothSpeed);
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

    public void SetMainTarget(Transform newMainTarget)
    {
        mainTarget = newMainTarget;
    }

    public void SetInitializeTarget()
    {
        target = mainTarget;
    }   

    public void SetYOffset(float y)
    {
        offset.y = offsetY;
        offsetY = y;
        //offset.y = y;
    }
    public float GetYOffset()
    {
        return offset.y;
    }
}
