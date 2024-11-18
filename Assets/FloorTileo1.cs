using UnityEngine;

public class FloorTile01 : MonoBehaviour
{
    public string tileName; // 地砖的名称（如 "Floor Tile_1"）
    private Material tileMaterial;
    private Color originalColor;
    private float originalAlpha;
    private bool isGlowing = false;

    private Color emissionColor;
    private float transparency;

    void Start()
    {
        // 获取地砖已有的材质
        Renderer renderer = GetComponent<Renderer>();
        if (renderer != null)
        {
            tileMaterial = renderer.material; // 直接使用已有的材质
        }
        else
        {
            Debug.LogError("地砖缺少材质！");
        }

        // 保存原始颜色和透明度
        originalColor = tileMaterial.color;
        originalAlpha = tileMaterial.color.a;

        // 确保材质使用的是透明渲染模式
        SetMaterialTransparent();
    }

    public void Initialize(Color emissionColor, float transparency)
    {
        this.emissionColor = emissionColor;
        this.transparency = transparency;

        // 初始化时确保地砖不发光
        SetGlowing(false);
    }

    public void SetGlowing(bool glow)
    {
        if (glow)
        {
            // 启用发光
            tileMaterial.EnableKeyword("_EMISSION");
            tileMaterial.SetColor("_EmissionColor", emissionColor);

            // 设置透明度
            Color color = tileMaterial.color;
            color.a = transparency;
            tileMaterial.color = color;

            isGlowing = true;
        }
        else
        {
            // 关闭发光
            tileMaterial.DisableKeyword("_EMISSION");
            tileMaterial.SetColor("_EmissionColor", Color.black);

            // 恢复原始颜色和透明度
            Color color = originalColor;
            color.a = originalAlpha;
            tileMaterial.color = color;

            isGlowing = false;
        }
    }

    void SetMaterialTransparent()
    {
        // Set the rendering mode to Transparent
        tileMaterial.SetFloat("_Mode", 3); // 0=Opaque, 1=Cutout, 2=Fade, 3=Transparent
        tileMaterial.SetOverrideTag("RenderType", "Transparent");
        tileMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.SrcAlpha);
        tileMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
        tileMaterial.SetInt("_ZWrite", 0);
        tileMaterial.DisableKeyword("_ALPHATEST_ON");
        tileMaterial.EnableKeyword("_ALPHABLEND_ON");
        tileMaterial.DisableKeyword("_ALPHAPREMULTIPLY_ON");
        tileMaterial.renderQueue = (int)UnityEngine.Rendering.RenderQueue.Transparent;
    }

}
