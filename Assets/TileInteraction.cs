using UnityEngine;

public class TileInteraction : MonoBehaviour
{
    [Header("OVR Settings")]
    public Transform rightHandAnchor; // OVRCameraRig中的RightHandAnchor
    public OVRInput.Button confirmButton = OVRInput.Button.PrimaryIndexTrigger; // 确认按钮

    [Header("Tile Settings")]
    public Material tileMaterial; // 地砖的材质
    public Color emissionColor = new Color(1f, 0.84f, 0f); // 金黄色
    [Range(0f, 1f)]
    public float transparency = 0.5f; // 透明度

    private bool isGlowing = false;
    private Color originalColor;
    private float originalAlpha;

    void Start()
    {
        // 获取地砖材质
        if (tileMaterial == null)
        {
            Renderer renderer = GetComponent<Renderer>();
            if (renderer != null)
            {
                tileMaterial = renderer.material;
            }
            else
            {
                Debug.LogError("地砖缺少材质！");
                return;
            }
        }

        // 保存原始颜色和透明度
        originalColor = tileMaterial.color;
        originalAlpha = tileMaterial.color.a;

        // 确保材质使用的是透明渲染模式
        SetMaterialTransparent();
    }

    void Update()
    {
        // 从RightHandAnchor发出射线
        Ray ray = new Ray(rightHandAnchor.position, rightHandAnchor.forward);
        RaycastHit hit;

        if (Physics.Raycast(ray, out hit, Mathf.Infinity))
        {
            if (hit.collider.gameObject == gameObject)
            {
                // 如果按下确认按钮
                if (OVRInput.GetDown(confirmButton))
                {
                    isGlowing = !isGlowing; // 切换发光状态
                    UpdateTileAppearance();
                }
            }
        }
    }

    void UpdateTileAppearance()
    {
        if (isGlowing)
        {
            // 启用发光
            tileMaterial.EnableKeyword("_EMISSION");
            tileMaterial.SetColor("_EmissionColor", emissionColor);

            // 设置透明度
            Color color = tileMaterial.color;
            color.a = transparency;
            tileMaterial.color = color;
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
