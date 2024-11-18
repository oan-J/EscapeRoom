using UnityEngine;
using System.Collections.Generic;

public class TileSequenceController : MonoBehaviour
{
    [Header("OVR Settings")]
    public Transform rightHandAnchor; // OVRCameraRig中的RightHandAnchor
    public OVRInput.Button confirmButton = OVRInput.Button.PrimaryIndexTrigger; // 确认按钮

    [Header("Tiles Settings")]
    public List<FloorTile01> tiles; // 所有地砖的列表
    public List<string> correctSequence; // 正确的地砖名称序列

    [Header("Feedback")]
    public Color emissionColor = new Color(1f, 0.84f, 0f); // 金黄色
    [Range(0f, 1f)]
    public float transparency = 0.5f; // 透明度
    public AudioClip successSound; // 成功音效

    private int currentStep = 0;
    private AudioSource audioSource;

    void Start()
    {
        audioSource = gameObject.AddComponent<AudioSource>();

        // 初始化每个地砖
        foreach (FloorTile01 tile in tiles)
        {
            tile.Initialize(emissionColor, transparency);
        }
    }

    void Update()
    {
        // 从RightHandAnchor发出射线
        Ray ray = new Ray(rightHandAnchor.position, rightHandAnchor.forward);
        RaycastHit hit;

        // 可视化射线（用于调试）
        Debug.DrawRay(ray.origin, ray.direction * 10f, Color.red);

        if (Physics.Raycast(ray, out hit, Mathf.Infinity))
        {
            FloorTile01 hitTile = hit.collider.GetComponent<FloorTile01>();

            if (hitTile != null)
            {
                // 如果按下确认按钮
                if (OVRInput.GetDown(confirmButton))
                {
                    HandleTileSelection(hitTile);
                }
            }
        }
    }

    void HandleTileSelection(FloorTile01 selectedTile)
    {
        Debug.Log("Selected Tile: " + selectedTile.tileName);
        Debug.Log("Expected Tile: " + correctSequence[currentStep]);

        // 检查选中的地砖是否是下一个正确的地砖
        if (selectedTile.tileName == correctSequence[currentStep])
        {
            // 正确的地砖
            selectedTile.SetGlowing(true);

            currentStep++;

            // 检查是否完成了整个序列
            if (currentStep >= correctSequence.Count)
            {
                // 播放成功音效
                if (successSound != null)
                {
                    audioSource.PlayOneShot(successSound);
                }

                Debug.Log("Sequence Completed Successfully!");

                // 可以在此添加更多成功后的逻辑

                // 重置步骤（如果需要重复此过程）
                // currentStep = 0;
            }
        }
        else
        {
            // 错误的地砖，重置序列
            Debug.Log("Wrong Tile Selected. Resetting sequence.");
            ResetTiles();
        }
    }

    void ResetTiles()
    {
        currentStep = 0;
        foreach (FloorTile01 tile in tiles)
        {
            tile.SetGlowing(false);
        }
    }
}
