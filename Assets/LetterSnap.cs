using UnityEngine;

public class LetterSnap : MonoBehaviour
{
    public string correctTargetTag;  // Set this in the Inspector to the correct target tag
    private bool isSnapped = false;

    private void OnTriggerEnter(Collider other)
    {
        if (!isSnapped && other.CompareTag(correctTargetTag))
        {
            // Check for overlapping objects before snapping
            if (!IsOverlapping(other))
            {
                SnapToPosition(other);
                isSnapped = true;
                Debug.Log($"{gameObject.name} is in the correct position!");

                // Disable physics after snapping
                Rigidbody rb = GetComponent<Rigidbody>();
                if (rb != null) rb.isKinematic = true;

                // Notify Puzzle Manager
                PuzzleManager.Instance.IncrementCorrectLetterCount();
            }
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (isSnapped && other.CompareTag(correctTargetTag))
        {
            isSnapped = false;
            Debug.Log($"{gameObject.name} was moved away from its target!");

            // Re-enable physics after snapping
            Rigidbody rb = GetComponent<Rigidbody>();
            if (rb != null) rb.isKinematic = false;

            // Notify Puzzle Manager
            PuzzleManager.Instance.DecrementCorrectLetterCount();
        }
    }

    private void SnapToPosition(Collider target)
    {
        // Smoothly move to the correct position
        transform.position = target.transform.position;
        transform.rotation = target.transform.rotation;
    }

    private bool IsOverlapping(Collider target)
    {
        // Check if there are other objects already occupying the target position
        Collider[] overlappingColliders = Physics.OverlapSphere(target.transform.position, 0.1f);
        foreach (var collider in overlappingColliders)
        {
            if (collider != target && collider != GetComponent<Collider>())
            {
                Debug.Log("Cannot snap, target position is blocked.");
                return true;
            }
        }
        return false;
    }
}
