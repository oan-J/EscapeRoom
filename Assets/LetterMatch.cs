using UnityEngine;

public class LetterMatch : MonoBehaviour
{
    public string correctGrabbableTag;  // Tag of the corresponding grabbable letter
    public GameObject lightEffect;     // Light effect GameObject to enable on success

    private bool isMatched = false;    // To track if this letter is already matched

    private void OnTriggerEnter(Collider other)
    {
        // Check if the colliding object has the correct tag
        if (!isMatched && other.CompareTag(correctGrabbableTag))
        {
            isMatched = true;

            // Enable the light effect
            if (lightEffect != null)
            {
                lightEffect.SetActive(true);
            }

            Debug.Log($"{gameObject.name} matched with {other.gameObject.name}!");
        }
    }
}
