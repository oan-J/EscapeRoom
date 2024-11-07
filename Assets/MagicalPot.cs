public class MagicalPot : MonoBehaviour
{
    [Header("References")]
    public GameObject potFillObject;
    public ParticleSystem successEffect;
    public ParticleSystem failureEffect;
    private bool isActive = false;
    
    [Header("Mixing Settings")]
    private Dictionary<PotionType, float> currentMixture = new Dictionary<PotionType, float>();
    public float maxCapacity = 9f; // Total capacity for 9 units (3+3+3)
    
    [Header("Visual Settings")]
    public Material potionMaterial;
    public Color correctPoisonColor = Color.yellow; // Golden color
    public Color incorrectPoisonColor = Color.green;
    private MaterialPropertyBlock propBlock;

    private void Start()
    {
        propBlock = new MaterialPropertyBlock();
        InitializeMixture();
    }

    private void InitializeMixture()
    {
        currentMixture[PotionType.Blue] = 0;
        currentMixture[PotionType.Red] = 0;
        currentMixture[PotionType.Yellow] = 0;
    }

    public void ActivatePot()
    {
        isActive = true;
    }

    public void ReceivePotion(PotionType type, float amount)
    {
        if (!isActive) return;

        currentMixture[type] += amount;
        
        UpdatePotVisuals();
        CheckMixture();
    }

    private void UpdatePotVisuals()
    {
        if (potFillObject == null) return;

        float totalAmount = GetTotalAmount();
        
        // Update fill level
        Renderer fillRenderer = potFillObject.GetComponent<Renderer>();
        if (fillRenderer != null)
        {
            fillRenderer.GetPropertyBlock(propBlock);
            propBlock.SetFloat("_FillAmount", totalAmount / maxCapacity);
            
            // Update color based on current mixture
            Color currentColor = IsCorrectMixture() ? correctPoisonColor : incorrectPoisonColor;
            propBlock.SetColor("_Color", currentColor);
            
            fillRenderer.SetPropertyBlock(propBlock);
        }
    }

    private float GetTotalAmount()
    {
        return currentMixture[PotionType.Blue] + 
               currentMixture[PotionType.Red] + 
               currentMixture[PotionType.Yellow];
    }

    private bool IsCorrectMixture()
    {
        const float targetAmount = 3f;
        const float tolerance = 0.1f; // Allow small measurement errors

        bool correctBlue = Mathf.Abs(currentMixture[PotionType.Blue] - targetAmount) < tolerance;
        bool correctRed = Mathf.Abs(currentMixture[PotionType.Red] - targetAmount) < tolerance;
        bool correctYellow = Mathf.Abs(currentMixture[PotionType.Yellow] - targetAmount) < tolerance;

        return correctBlue && correctRed && correctYellow;
    }

    private void CheckMixture()
    {
        float totalAmount = GetTotalAmount();
        
        // Only check when pot is full (9 units)
        if (Mathf.Abs(totalAmount - maxCapacity) < 0.1f)
        {
            if (IsCorrectMixture())
            {
                TriggerSuccess();
            }
            else
            {
                TriggerFailure();
            }
        }
    }

    private void TriggerSuccess()
    {
        if (successEffect != null)
        {
            successEffect.Play();
        }
        Debug.Log("Correct poison created!");
        // Add additional success effects/logic here
    }

    private void TriggerFailure()
    {
        if (failureEffect != null)
        {
            failureEffect.Play();
        }
        Debug.Log("Wrong mixture!");
        // Add additional failure effects/logic here
    }

    public void ResetPot()
    {
        InitializeMixture();
        UpdatePotVisuals();
    }
}