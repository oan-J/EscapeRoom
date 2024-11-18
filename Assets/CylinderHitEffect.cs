using UnityEngine;

public class CylinderCollisionAudio : MonoBehaviour
{
    public string triggeringTag = "Grabbable"; // The tag that triggers the collision effects
    public AudioClip collisionAudio;          // The audio clip to play on collision
    private AudioSource audioSource;          // The AudioSource to play the audio
    private bool isGameComplete = false;      // To ensure game completion logic is only triggered once

    void Start()
    {
        // Get or add the AudioSource component
        audioSource = GetComponent<AudioSource>();
        if (audioSource == null)
        {
            audioSource = gameObject.AddComponent<AudioSource>();
        }

        // Configure the AudioSource
        audioSource.playOnAwake = false;
    }

    private void OnCollisionEnter(Collision collision)
    {
        // Check if the colliding object has the correct tag
        if (!isGameComplete && collision.collider.CompareTag(triggeringTag))
        {
            Debug.Log($"{gameObject.name} collided with {collision.collider.name}");

            // Play the collision audio
            if (collisionAudio != null)
            {
                audioSource.clip = collisionAudio;
                audioSource.Play();
            }

            // Apply a force to move this cylinder out of the way
            Rigidbody rb = GetComponent<Rigidbody>();
            if (rb != null)
            {
                Vector3 knockbackForce = collision.relativeVelocity * 5f; // Adjust the force multiplier as needed
                rb.AddForce(knockbackForce, ForceMode.Impulse);
            }

            // Mark Game 4 as complete
            MarkGameComplete();
        }
    }

    private void MarkGameComplete()
    {
        GameManager gameManager = FindObjectOfType<GameManager>();
        if (gameManager != null)
        {
            gameManager.CompleteGame(3); // Game 4 has an index of 3
            isGameComplete = true;      // Ensure this logic is only executed once
            Debug.Log("Game 4 completed!");
        }
        else
        {
            Debug.LogError("GameManager not found in the scene!");
        }
    }
}
