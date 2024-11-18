using UnityEngine;

public class LetterMatchSystem : MonoBehaviour
{
    public string correctTag;               // The tag of the corresponding grabbable letter
    public AudioClip matchAudioClip;        // The audio clip to play on correct match
    public ParticleSystem matchParticleSystem; // The particle system to play on correct match

    private AudioSource audioSource;        // Reference to the AudioSource component
    private bool isMatched = false;         // Track if the letter has been matched
    private bool gameCompleted = false;     // Ensure the game completion logic is only triggered once

    void Start()
    {
        // Get or add the AudioSource component
        audioSource = GetComponent<AudioSource>();
        if (audioSource == null)
        {
            audioSource = gameObject.AddComponent<AudioSource>();
        }

        // Ensure the AudioSource is configured
        audioSource.playOnAwake = false;
    }

    private void OnTriggerEnter(Collider other)
    {
        Debug.Log($"Collision detected with: {other.name}");

        // Check if the colliding object has the correct tag
        if (!isMatched && other.CompareTag(correctTag))
        {
            isMatched = true;

            // Play the selected audio clip
            if (matchAudioClip != null)
            {
                audioSource.clip = matchAudioClip;
                audioSource.Play();
                MarkGameComplete(); // Mark Game 3 as complete when the audio is played
            }

            // Play the particle system
            if (matchParticleSystem != null)
            {
                matchParticleSystem.Play();
            }

            Debug.Log($"{gameObject.name} matched with {other.gameObject.name}!");
        }
    }

    private void MarkGameComplete()
    {
        if (gameCompleted) return; // Prevent duplicate completion logic

        GameManager gameManager = FindObjectOfType<GameManager>();
        if (gameManager != null)
        {
            gameManager.CompleteGame(2); // Mark Game 3 as complete (index 2)
            gameCompleted = true;
            Debug.Log("Game 3 completed!");
        }
        else
        {
            Debug.LogError("GameManager not found in the scene!");
        }
    }
}
