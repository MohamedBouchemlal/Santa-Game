using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.U2D;

public class AtlasSprite : MonoBehaviour
{
    [SerializeField] SpriteRenderer spriteRenderer;
    [SerializeField] SpriteAtlas atlasSprite;
    [SerializeField] string spriteName;

    void Awake()
    {
        spriteRenderer.sprite = atlasSprite.GetSprite(spriteName);
    }
}
