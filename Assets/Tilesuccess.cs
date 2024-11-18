using UnityEngine;

public class Tilesuccess : MonoBehaviour
{
    [Header("OVR Settings")]
    public Transform rightHandAnchor; // OVRCameraRig中的RightHandAnchor
    public OVRInput.Button confirmButton = OVRInput.Button.PrimaryIndexTrigger; // 确认按钮

    [Header("Tiles Settings")]
    public FloorTile01 floorTile_8; // Floor Tile_8
    public FloorTile01 floorTile_5; // Floor Tile_5
    public FloorTile01 floorTile_6; // Floor Tile_6
    public FloorTile01 floorTile_3; // Floor Tile_3

    [Header("Feedback")]
    public AudioClip successSound; // 成功音效

    private AudioSource audioSource;
    private bool hasPlayedSuccessSound = false; // 避免重复播放音乐

    void Start()
    {
        audioSource = gameObject.AddComponent<AudioSource>();

        // 检查所有地砖是否已分配
        if (floorTile_8 == null || floorTile_5 == null || floorTile_6 == null || floorTile_3 == null)
        {
            Debug.LogError("请在 Inspector 中设置所有的地砖引用！");
        }
    }

    void Update()
    {
        // 每帧检查所有地砖的 Y 轴
        CheckTilesPosition();
    }

    void CheckTilesPosition()
    {
        // 检查所有指定地砖的 Y 轴是否都大于 1
        if (floorTile_8.transform.position.y > 1 &&
            floorTile_5.transform.position.y > 1 &&
            floorTile_6.transform.position.y > 1 &&
            floorTile_3.transform.position.y > 1)
        {
            // 如果成功音效未播放，则播放
            if (!hasPlayedSuccessSound)
            {
                PlaySuccessSound();
            }
        }
        else
        {
            hasPlayedSuccessSound = false; // 如果条件未满足，允许再次播放成功音效
        }
    }

    void PlaySuccessSound()
    {
        if (successSound != null)
        {
            audioSource.PlayOneShot(successSound);
            hasPlayedSuccessSound = true; // 确保音效只播放一次
            Debug.Log("所有指定地砖的 Y 轴大于 1，播放成功音效！");
        }
    }
}
