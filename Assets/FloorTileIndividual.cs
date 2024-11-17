using UnityEngine;

public class FloorTileIndividual : MonoBehaviour
{
    public Material glowMaterial;             // Material with emission effect for correct tiles
    public Material defaultMaterial;          // Default material for resetting
    public int correctStepIndex;              // The correct step index for this tile
    public bool isLastTile;                   // Is this the last tile in the sequence?

    private static int currentStep = 0;       // Static variable to track player progress in the sequence
    private static bool puzzleCompleted = false;
    private static AudioSource audioSource;

    private Renderer tileRenderer;

    private void Start()
    {
        tileRenderer = GetComponent<Renderer>();
        tileRenderer.material = defaultMaterial;

        if (audioSource == null)
        {
            audioSource = FindObjectOfType<AudioSource>();
            if (audioSource == null)
            {
                audioSource = gameObject.AddComponent<AudioSource>();
            }
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (puzzleCompleted)
            return;

        if (other.CompareTag("Player"))
        {
            if (correctStepIndex == currentStep)
            {
                // Correct tile stepped on
                ActivateLight();
                currentStep++;

                if (isLastTile && currentStep == correctStepIndex + 1)
                {
                    // Puzzle completed
                    PuzzleCompleted();
                }
            }
            else
            {
                // Wrong tile stepped on
                ResetTiles();
            }
        }
    }

    private void ActivateLight()
    {
        tileRenderer.material = glowMaterial;
    }

    private void DeactivateLight()
    {
        tileRenderer.material = defaultMaterial;
    }

    private void ResetTiles()
    {
        FloorTileIndividual[] allTiles = FindObjectsOfType<FloorTileIndividual>();
        foreach (FloorTileIndividual tile in allTiles)
        {
            tile.DeactivateLight();
        }
        currentStep = 0;
        puzzleCompleted = false;
    }

    private void PuzzleCompleted()
    {
        Debug.Log("Puzzle Completed!");
        puzzleCompleted = true;
        audioSource.PlayOneShot(audioSource.clip);
        // Additional actions like unlocking a door can be added here
    }
}
