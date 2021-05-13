using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FallTrap : MonoBehaviour
{
    [SerializeField] Transform spawnPos;

    public Vector2 GetSpawnPos()
    {
        return spawnPos.position;
    }
}
