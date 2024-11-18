using UnityEngine;

public class LetterMatch : MonoBehaviour
{
    public string correctTag;         // The tag of the corresponding grabbable letter
    public ParticleSystem feedbackEffect;  // Particle system to trigger on success

    private bool isMatched = false;   // Track if the letter has been matched

    private void OnTriggerEnter(Collider other)
    {
        Debug.Log($"Collision detected: {other.name}");

        // Check if the colliding object is the correct grabbable letter
        if (!isMatched && other.CompareTag(correctTag))
        {
            isMatched = true;

            // Play the feedback effect
            if (feedbackEffect != null)
            {
                Debug.Log("Playing feedback effect.");
                feedbackEffect.Play();
            }

            Debug.Log($"{gameObject.name} matched with {other.gameObject.name}!");
        }
    }
}