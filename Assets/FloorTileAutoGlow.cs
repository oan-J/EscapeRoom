using System.Collections.Generic;
using UnityEngine;

public class FloorTileRaycast : MonoBehaviour
{
    public List<GameObject> floorTiles;       // Reference to all floor tiles
    public Transform rightHandAnchor;         // Reference to the player's right hand controller
    public AudioClip successClip;             // Success sound for completing the puzzle

    private AudioSource audioSource;
    private int currentStep = 0;
    private int[] correctSequence = { 8, 5, 6, 3 }; // Sequence to match
    private int floorTileLayerMask;           // LayerMask for the floor tiles

    private void Start()
    {
        audioSource = GetComponent<AudioSource>();
        if (audioSource == null)
        {
            audioSource = gameObject.AddComponent<AudioSource>();
        }
        ResetPuzzle();

        // Set LayerMask to only include "FloorTile" layer
        floorTileLayerMask = LayerMask.GetMask("FloorTile");
    }

    private void Update()
    {
        // Detect if player presses the controller button
        if (OVRInput.GetDown(OVRInput.Button.One)) // A button, might vary depending on controller
        {
            // Cast a ray from the right hand controller
            Ray ray = new Ray(rightHandAnchor.position, rightHandAnchor.forward);
            RaycastHit hit;

            // Only detect objects in the "FloorTile" layer
            if (Physics.Raycast(ray, out hit, Mathf.Infinity, floorTileLayerMask))
            {
                GameObject hitObject = hit.collider.gameObject;

                // Check if the hit object is in the floorTiles list
                if (floorTiles.Contains(hitObject))
                {
                    OnTileStepped(hitObject);
                }
            }
        }
    }

    // Method to call when player steps on a tile
    public void OnTileStepped(GameObject tile)
    {
        int tileIndex = floorTiles.IndexOf(tile) + 1; // Get tile number based on list position (1-based index)

        if (tileIndex == correctSequence[currentStep])
        {
            // Correct tile: apply emission and move to next step
            Renderer tileRenderer = tile.GetComponent<Renderer>();
            Material tileMaterial = tileRenderer.material;

            // Enable emission and set color
            tileMaterial.EnableKeyword("_EMISSION");
            tileMaterial.SetColor("_EmissionColor", Color.yellow * 3.0f); // Adjust emission intensity and color
            tileMaterial.color = new Color(tileMaterial.color.r, tileMaterial.color.g, tileMaterial.color.b, 0.5f); // Reduce transparency

            Debug.Log("Stepping on correct tile: " + tile.name);
            currentStep++;

            if (currentStep >= correctSequence.Length)
            {
                PuzzleCompleted();
            }
        }
        else
        {
            Debug.Log("Stepping on wrong tile: " + tile.name);
            ResetPuzzle();
        }
    }

    // Reset all tiles and progress
    private void ResetPuzzle()
    {
        Debug.Log("Resetting puzzle...");
        foreach (GameObject tile in floorTiles)
        {
            Renderer tileRenderer = tile.GetComponent<Renderer>();
            Material tileMaterial = tileRenderer.material;
            tileMaterial.DisableKeyword("_EMISSION");
            tileMaterial.color = new Color(tileMaterial.color.r, tileMaterial.color.g, tileMaterial.color.b, 1.0f); // Reset transparency
        }
        currentStep = 0;
    }

    // Handle puzzle completion
    private void PuzzleCompleted()
    {
        Debug.Log("Puzzle Completed!");
        audioSource.PlayOneShot(successClip);
        // Additional actions can be added here, like unlocking a door or spawning an object
    }
}
