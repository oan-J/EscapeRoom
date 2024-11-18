using UnityEngine;

public class Tile : MonoBehaviour
{
    public string tileName; // 地砖的名称（如 "Floor Tile_1"）
    private Material tileMaterial;
    private Color originalColor;
    private float originalAlpha;
    private bool isGlowing = false;

    private Color emissionColor;
    private float transparency;

    public void Initialize(Color emissionColor, float transparency)
    {
        this.emissionColor = emissionColor;
        this.transparency = transparency;

        Renderer renderer = GetComponent<Renderer>();
        if (renderer != null)
        {
            tileMaterial = renderer.material;
            originalColor = tileMaterial.color;
            originalAlpha = tileMaterial.color.a;

            // 确保材质使用的是透明渲染模式
            SetMaterialTransparent();
        }
        else
        {
            Debug.LogError("地砖缺少材质！");
        }
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

            // 恢复原始透明度
            Color color = tileMaterial.color;
            color.a = originalAlpha;
            tileMaterial.color = color;

            isGlowing = false;
        }
    }

    void SetMaterialTransparent()
    {
        // 设置材质为透明模式
        tileMaterial.SetFloat("_Mode", 3);
        tileMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.SrcAlpha);
        tileMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
        tileMaterial.SetInt("_ZWrite", 0);
        tileMaterial.DisableKeyword("_ALPHATEST_ON");
        tileMaterial.EnableKeyword("_ALPHABLEND_ON");
        tileMaterial.DisableKeyword("_ALPHAPREMULTIPLY_ON");
        tileMaterial.renderQueue = 3000;
    }
}
