using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyMovement : MonoBehaviour
{
    [SerializeField] bool Vertical;
    [SerializeField] bool bodySeparated;
    [SerializeField] float distance;
    [SerializeField] float speed;
    [SerializeField] Vector3 childOffset;

    private Transform myTransform;
    private Transform bodyTransform;
    private Vector2 pos1, pos2;
    private Vector2 target;   
    private float old_Xpos;
    private bool canMove;
    private bool childPosChanged;

    void Start()
    {
        canMove = true;
        childPosChanged = false;
        myTransform = transform;

        if (bodySeparated)
            bodyTransform = transform.GetChild(0);

        if (Vertical){
            pos1 = transform.position;
            pos2 = new Vector2(transform.position.x, transform.position.y + distance);
        }
        else
        {
            pos1 = transform.position;
            pos2 = new Vector2(transform.position.x + distance, transform.position.y);
            old_Xpos = transform.position.x;
        }
    }

    // Update is called once per frame
    void Update()
    {
        Move();
    }

    private void Move()
    {
        if (canMove) {
            //movement
            if (Mathf.Approximately(Vector2.Distance(transform.position, pos1), 0f))
                target = pos2;
            else if (Mathf.Approximately(Vector2.Distance(transform.position, pos2), 0f))
                target = pos1;

        //looking section
            if (!Vertical)
            {
                if (myTransform.position.x < old_Xpos)
                {
                    bodyTransform.localScale = new Vector3(1, 1, 1);                 
                    if (bodySeparated)
                    {
                        bodyTransform.localPosition = Vector2.zero;
                        childPosChanged = false;
                    }
                }
                else if (myTransform.position.x > old_Xpos)
                {
                    bodyTransform.localScale = new Vector3(-1, 1, 1);
                    if (bodySeparated && !childPosChanged)
                    {
                        bodyTransform.position += childOffset;
                        childPosChanged = true;
                    }                      
                }                                 
                old_Xpos = myTransform.position.x;
            }
            myTransform.position = Vector2.MoveTowards(myTransform.position, target, speed * Time.deltaTime);
        }
    }
    public void StopMovement()
    {
        canMove = false;
    }
}
