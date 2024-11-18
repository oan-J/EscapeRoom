using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class RayGrabLetterSlide : MonoBehaviour
{
    public string correctTargetTag;  // Tag of the correct target for this letter
    public float snapDistance = 0.5f; // Distance threshold for snapping
    private bool isSnapped = false;  // Whether the letter is correctly snapped
    private XRGrabInteractable grabbable;
    private Rigidbody rb;

    void Start()
    {
        // Get required components
        grabbable = GetComponent<XRGrabInteractable>();
        rb = GetComponent<Rigidbody>();

        if (grabbable == null || rb == null)
        {
            Debug.LogError("Missing required components: XRGrabInteractable or Rigidbody.");
            return;
        }

        // Ensure Rigidbody is properly configured
        rb.useGravity = false;
        rb.isKinematic = false;

        // Add listeners for grab events
        grabbable.selectEntered.AddListener(OnGrabBegin);
        grabbable.selectExited.AddListener(OnGrabEnd);
    }

    private void OnDestroy()
    {
        // Remove listeners to avoid memory leaks
        if (grabbable != null)
        {
            grabbable.selectEntered.RemoveListener(OnGrabBegin);
            grabbable.selectExited.RemoveListener(OnGrabEnd);
        }
    }

    private void OnGrabBegin(SelectEnterEventArgs args)
    {
        // Temporarily disable physics for smooth sliding
        rb.isKinematic = true;
        isSnapped = false;  // Reset snap state while dragging
    }

    private void OnGrabEnd(SelectExitEventArgs args)
    {
        // Re-enable physics after releasing
        rb.isKinematic = false;

        // Attempt to snap to the closest valid target
        Transform closestTarget = FindClosestTarget();
        if (closestTarget != null && Vector3.Distance(transform.position, closestTarget.position) <= snapDistance)
        {
            SnapToPosition(closestTarget);
        }
    }

    private Transform FindClosestTarget()
    {
        // Get all colliders within a small range and check their tags
        Collider[] colliders = Physics.OverlapSphere(transform.position, snapDistance);
        foreach (Collider collider in colliders)
        {
            if (collider.CompareTag(correctTargetTag)) // Match the tag
            {
                return collider.transform; // Return the transform of the correct target
            }
        }
        return null; // No valid target found
    }

    private void SnapToPosition(Transform target)
    {
        // Snap the letter to the target position
        transform.position = target.position;
        transform.rotation = target.rotation;
        isSnapped = true;

        Debug.Log($"{gameObject.name} snapped to {target.name}!");

        // Notify Puzzle Manager
        PuzzleManager.Instance.IncrementCorrectLetterCount();
    }
}
