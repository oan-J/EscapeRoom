using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public enum PotionType
{
    Blue,
    Red,
    Yellow
}

public class PotionBottle : MonoBehaviour
{
    [Header("References")]
    public PotionType potionType;
    public GameObject fillObject;
    public GameObject cork;
    private XRGrabInteractable grabInteractable;
    private Rigidbody rb;
    
    [Header("Pouring Settings")]
    public float pourThreshold = 45f;
    public float pourRate = 0.33f; // Adjusted to pour exactly 1/3 unit per second
    private bool isPouring = false;
    private float currentFillAmount = 1f;
    
    [Header("Visual Settings")]
    public Material potionMaterial;
    private MaterialPropertyBlock propBlock;

    void Start()
    {
        grabInteractable = GetComponent<XRGrabInteractable>();
        rb = GetComponent<Rigidbody>();
        propBlock = new MaterialPropertyBlock();
        
        grabInteractable.selectEntered.AddListener(OnGrab);
        grabInteractable.selectExited.AddListener(OnRelease);
        UpdateFillVisualization();
    }

    void Update()
    {
        if (grabInteractable.isSelected)
        {
            CheckPouring();
        }
    }

    private void CheckPouring()
    {
        float tiltAngle = Vector3.Angle(transform.up, Vector3.up);
        
        if (tiltAngle > pourThreshold && currentFillAmount > 0 && !cork.activeSelf)
        {
            StartPouring();
        }
        else
        {
            StopPouring();
        }
    }

    private void StartPouring()
    {
        if (!isPouring)
        {
            isPouring = true;
        }

        currentFillAmount -= pourRate * Time.deltaTime;
        currentFillAmount = Mathf.Max(0, currentFillAmount);
        
        UpdateFillVisualization();

        RaycastHit hit;
        if (Physics.Raycast(transform.position, Vector3.down, out hit, 2f))
        {
            if (hit.collider.CompareTag("MagicalPot"))
            {
                MagicalPot pot = hit.collider.GetComponent<MagicalPot>();
                if (pot != null)
                {
                    pot.ReceivePotion(potionType, pourRate * Time.deltaTime);
                }
            }
        }
    }

    private void UpdateFillVisualization()
    {
        if (fillObject != null)
        {
            Renderer fillRenderer = fillObject.GetComponent<Renderer>();
            if (fillRenderer != null)
            {
                fillRenderer.GetPropertyBlock(propBlock);
                propBlock.SetFloat("_FillAmount", currentFillAmount);
                fillRenderer.SetPropertyBlock(propBlock);
            }
        }
    }

    private void StopPouring()
    {
        isPouring = false;
    }

    private void OnGrab(SelectEnterEventArgs args)
    {
        rb.isKinematic = false;
    }

    private void OnRelease(SelectExitEventArgs args)
    {
        StopPouring();
    }
}