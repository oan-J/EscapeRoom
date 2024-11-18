using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class RayGrabCylinderSpin : MonoBehaviour
{
    public float rotationSpeed = 50f; // Speed of rotation
    public float targetAngle = 90f;  // Correct angle to complete the puzzle
    public float tolerance = 5f;     // Allowed margin of error

    private XRGrabInteractable grabbable;
    private bool isCorrect = false;
    private bool isRotating = false;

    void Start()
    {
        // Find and cache the Grabbable component
        grabbable = GetComponentInChildren<XRGrabInteractable>();

        if (grabbable == null)
        {
            Debug.LogError("No XRGrabInteractable (Grabbable) component found!");
        }

        // Subscribe to grab events
        grabbable.selectEntered.AddListener(OnGrabBegin);
        grabbable.selectExited.AddListener(OnGrabEnd);
    }

    private void OnDestroy()
    {
        // Unsubscribe from grab events to avoid memory leaks
        if (grabbable != null)
        {
            grabbable.selectEntered.RemoveListener(OnGrabBegin);
            grabbable.selectExited.RemoveListener(OnGrabEnd);
        }
    }

    private void Update()
    {
        if (isRotating && !isCorrect)
        {
            // Use input from the thumbstick to rotate the cylinder
            float rotationInput = OVRInput.Get(OVRInput.Axis2D.PrimaryThumbstick).x * rotationSpeed * Time.deltaTime;
            transform.Rotate(0, rotationInput, 0);

            // Restrict rotation to the Y-axis
            Vector3 currentRotation = transform.localEulerAngles;
            transform.localEulerAngles = new Vector3(0, currentRotation.y, 0);

            // Check alignment with target angle
            if (Mathf.Abs(currentRotation.y - targetAngle) <= tolerance)
            {
                LockCylinder();
            }
        }
    }

    private void OnGrabBegin(SelectEnterEventArgs args)
    {
        if (!isCorrect) // Only allow rotation if the cylinder is not locked
        {
            isRotating = true;
        }
    }

    private void OnGrabEnd(SelectExitEventArgs args)
    {
        isRotating = false;
    }

    private void LockCylinder()
    {
        isCorrect = true; // Mark as correct
        isRotating = false; // Stop rotation
        Debug.Log($"{gameObject.name} is locked at the correct angle!");

        // Align the cylinder exactly to the target angle to prevent drifting
        transform.localEulerAngles = new Vector3(0, targetAngle, 0);

        // Notify the puzzle manager
        CylinderPuzzleManager.Instance.CylinderCorrect();
    }
}
