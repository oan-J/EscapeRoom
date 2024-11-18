using UnityEngine;
using TMPro;
using System.Collections; // Required for IEnumerator

public class GameManager : MonoBehaviour
{
    public TextMeshProUGUI progressText; // UI text to display game progress
    public Door door;                    // Reference to the door object

    public AudioClip gameOverAudio;      // Audio for all games completed
    public AudioClip successAudio;      // Additional audio for success
    public ParticleSystem gameOverEffect; // Particle system for game over visual effect
    private AudioSource audioSource;     // AudioSource for playing audio

    private bool[] gameStatus;           // Array to track the completion status of each game
    private int totalGames = 4;          // Total number of games
    private int completedGames = 0;      // Counter for completed games

    void Start()
    {
        // Initialize the game status array
        gameStatus = new bool[totalGames];

        // Get or add the AudioSource component
        audioSource = GetComponent<AudioSource>();
        if (audioSource == null)
        {
            audioSource = gameObject.AddComponent<AudioSource>();
        }

        // Configure the AudioSource
        audioSource.playOnAwake = false;

        // Initialize progress UI
        UpdateProgress();
    }

    // Method to mark a game as completed
    public void CompleteGame(int gameIndex)
    {
        if (gameIndex < 0 || gameIndex >= totalGames)
        {
            Debug.LogError("Invalid game index!");
            return;
        }

        if (!gameStatus[gameIndex]) // Check if the game is not already marked as complete
        {
            gameStatus[gameIndex] = true;
            completedGames++;
            Debug.Log($"Game {gameIndex + 1} completed!");

            // Update progress UI
            UpdateProgress();

            // Check if all games are completed
            if (completedGames == totalGames)
            {
                Debug.Log("All games completed! Game Over!");
                TriggerGameOver();
            }
        }
    }

    private void UpdateProgress()
    {
        if (progressText != null)
        {
            progressText.text = $"Games Completed: {completedGames}/{totalGames}";
        }
        else
        {
            Debug.LogWarning("Progress Text not assigned in the Inspector!");
        }
    }

    private IEnumerator PlayDelayedAudioSequence()
    {
        // Play the first game over audio
        if (gameOverAudio != null)
        {
            audioSource.clip = gameOverAudio;
            audioSource.Play();
        }

        // Wait 1 second before playing the success audio
        yield return new WaitForSeconds(1f);

        if (successAudio != null)
        {
            audioSource.clip = successAudio;
            audioSource.Play();
        }
    }

    private void TriggerGameOver()
    {
        // Trigger the game over particle effect
        if (gameOverEffect != null)
        {
            gameOverEffect.Play();
        }

        // Unlock the door
        if (door != null)
        {
            door.Unlock();
        }

        // Start the audio sequence
        StartCoroutine(PlayDelayedAudioSequence());

        Debug.Log("Game Over! Congratulations!");
    }

    // Method to reset the game state
    public void ResetGame()
    {
        // Reset the game status array
        for (int i = 0; i < gameStatus.Length; i++)
        {
            gameStatus[i] = false;
        }

        // Reset completed games count
        completedGames = 0;

        // Update the progress UI
        UpdateProgress();

        // Reset the door state
        if (door != null)
        {
            door.Reset();
        }

        // Stop the game over particle effect
        if (gameOverEffect != null)
        {
            gameOverEffect.Stop();
        }

        Debug.Log("Game reset!");
    }
}
