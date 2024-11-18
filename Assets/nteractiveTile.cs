using UnityEngine;

public class InteractiveTile : MonoBehaviour
{
    [Header("Glow Settings")]
    public Color emissionColor = new Color(1f, 0.84f, 0f); // 金黄色
    [Range(0f, 1f)] public float transparency = 0.8f; // 透明度

    private Material tileMaterial;
    private Color originalColor;
    private float originalAlpha;

    void Start()
    {
        // 获取地砖的材质
        Renderer renderer = GetComponent<Renderer>();
        if (renderer != null)
        {
            tileMaterial = renderer.material; // 获取材质实例
        }
        else
        {
            Debug.LogError("未找到 Renderer 组件！");
            return;
        }

        // 保存原始颜色和透明度
        originalColor = tileMaterial.color;
        originalAlpha = tileMaterial.color.a;

        // 初始化材质为非发光状态
        DisableGlow();
    }

    void Update()
    {
        // 检测地砖的 Y 轴
        if (transform.position.y > 0.05f)
        {
            EnableGlow();
        }
        else
        {
            DisableGlow();
        }
    }

    private void EnableGlow()
    {
        // 启用发光
        tileMaterial.EnableKeyword("_EMISSION");
        tileMaterial.SetColor("_EmissionColor", emissionColor);

        // 设置透明度
        Color color = tileMaterial.color;
        color.a = transparency;
        tileMaterial.color = color;
    }

    private void DisableGlow()
    {
        // 禁用发光
        tileMaterial.DisableKeyword("_EMISSION");
        tileMaterial.SetColor("_EmissionColor", Color.black);

        // 恢复原始颜色和透明度
        Color color = originalColor;
        color.a = originalAlpha;
        tileMaterial.color = color;
    }
}
