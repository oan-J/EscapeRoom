using UnityEngine;

public class LetterSnap : MonoBehaviour
{
    public string correctTargetTag;  // Set this in the Inspector to the correct target tag
    private bool isSnapped = false;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag(correctTargetTag))
        {
            transform.position = other.transform.position;
            transform.rotation = other.transform.rotation;
            isSnapped = true;
            Debug.Log($"{gameObject.name} is in the correct position!");

            GetComponent<Rigidbody>().isKinematic = true;
            PuzzleManager.Instance.IncrementCorrectLetterCount();  // Corrected to IncrementCorrectLetterCount
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag(correctTargetTag) && isSnapped)
        {
            isSnapped = false;
            Debug.Log($"{gameObject.name} was moved away from its target!");

            GetComponent<Rigidbody>().isKinematic = false;
            PuzzleManager.Instance.DecrementCorrectLetterCount();  // Corrected to DecrementCorrectLetterCount
        }
    }
}
