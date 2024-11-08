using System.Collections.Generic;
using UnityEngine;

public class FloorTilePuzzle : MonoBehaviour
{
    public List<GameObject> floorTiles;       // Reference to all floor tiles
    public Material glowMaterial;             // Material with emission effect for correct tiles
    public Material defaultMaterial;          // Default material for resetting
    private int[] correctSequence = { 8, 5, 6, 3 }; // Sequence to match
    private int currentStep = 0;              // Player's progress in the sequence

    // Method to call when player steps on a tile
    public void OnTileStepped(GameObject tile)
    {
        int tileIndex = floorTiles.IndexOf(tile) + 1; // Get tile number based on list position

        if (tileIndex == correctSequence[currentStep])
        {
            // Correct tile: apply glow material and move to next step
            tile.GetComponent<Renderer>().material = glowMaterial;
            currentStep++;

            if (currentStep >= correctSequence.Length)
            {
                // Puzzle completed
                PuzzleCompleted();
            }
        }
        else
        {
            // Wrong tile: reset puzzle
            ResetPuzzle();
        }
    }

    // Reset all tiles and progress
    private void ResetPuzzle()
    {
        foreach (GameObject tile in floorTiles)
        {
            tile.GetComponent<Renderer>().material = defaultMaterial;
        }
        currentStep = 0;
    }

    // Handle puzzle completion
    private void PuzzleCompleted()
    {
        Debug.Log("Puzzle Completed!");
        // Additional actions can be added here, like unlocking a door or spawning an object
    }
}
