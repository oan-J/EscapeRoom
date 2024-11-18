using UnityEngine;
using System.Collections.Generic;

public class TileSequenceManager : MonoBehaviour
{
    [Header("Tile Settings")]
    public List<GameObject> tiles;
    public List<string> correctSequence; 
    public AudioClip successSound;

    private int currentStep = 0; 
    private AudioSource audioSource;
    private bool gameCompleted = false; // Flag to ensure the game is marked complete only once

    void Start()
    {
        audioSource = gameObject.AddComponent<AudioSource>();

        if (tiles == null || tiles.Count == 0 || correctSequence == null || correctSequence.Count == 0)
        {
            Debug.LogError("Please make sure all tiles and activation order are configured correctly!");
        }
    }

    void Update()
    {
        foreach (GameObject tile in tiles)
        {
            if (tile.transform.position.y > 0.05f) 
            {
                HandleTileActivation(tile);
            }
        }
    }

    void HandleTileActivation(GameObject tile)
    {
        string tileName = tile.name;
        if (tileName == correctSequence[currentStep])
        {
            ActivateTile(tile);
            currentStep++;
            if (currentStep >= correctSequence.Count)
            {
                PlaySuccessSound();
                MarkGameComplete(); // Mark Game 2 as complete when the sound plays
            }
        }
        else
        {
            Debug.Log("Wrong floor tile: " + tileName + ", without triggering any effects.");
        }
    }

    void ActivateTile(GameObject tile)
    {
        Renderer renderer = tile.GetComponent<Renderer>();
        if (renderer != null)
        {
            Material material = renderer.material;
            material.EnableKeyword("_EMISSION");
            material.SetColor("_EmissionColor", new Color(1f, 0.84f, 0f)); 

            Debug.Log(tile.name + " illuminated");
        }
    }

    void PlaySuccessSound()
    {
        if (successSound != null)
        {
            audioSource.PlayOneShot(successSound);
            Debug.Log("All tiles are activated in the correct order, and the success sound effect plays!");
        }
    }

    void MarkGameComplete()
    {
        if (gameCompleted) return; // Ensure this logic runs only once

        GameManager gameManager = FindObjectOfType<GameManager>();
        if (gameManager != null)
        {
            gameManager.CompleteGame(1); // Mark Game 2 as complete (index 1)
            gameCompleted = true;
            Debug.Log("Game 2 completed!");
        }
        else
        {
            Debug.LogError("GameManager not found in the scene!");
        }
    }
}
