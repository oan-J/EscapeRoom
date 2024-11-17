using UnityEngine;
using System.Collections.Generic;

public class FloorTileGame : MonoBehaviour
{
    public GameObject OVRRig;
    public AudioClip successClip;
    public List<FloorTile> floorTiles;

    private int currentStepIndex = 0;
    private AudioSource audioSource;

    private void Start()
    {
        audioSource = OVRRig.GetComponent<AudioSource>();
        if (audioSource == null)
        {
            audioSource = OVRRig.AddComponent<AudioSource>();
        }

        ResetTiles();
    }

    private void Update()
    {
        HandleTileStepping();
    }

    private void HandleTileStepping()
    {
        foreach (var tile in floorTiles)
        {
            if (tile.IsSteppedOn())
            {
                if (tile == floorTiles[currentStepIndex])
                {
                    // Correct tile stepped on
                    tile.ActivateLight();
                    currentStepIndex++;

                    if (currentStepIndex >= floorTiles.Count)
                    {
                        // Player stepped on all tiles correctly
                        audioSource.PlayOneShot(successClip);
                        currentStepIndex = 0;
                        ResetTiles();
                    }
                }
                else
                {
                    // Incorrect tile stepped on
                    ResetTiles();
                }

                break;
            }
        }
    }

    private void ResetTiles()
    {
        foreach (var tile in floorTiles)
        {
            tile.DeactivateLight();
        }
        currentStepIndex = 0;
    }
}

public class FloorTile : MonoBehaviour
{
    private Renderer tileRenderer;
    private bool steppedOn = false;

    private void Start()
    {
        tileRenderer = GetComponent<Renderer>();
        DeactivateLight();
    }

    public void ActivateLight()
    {
        tileRenderer.material.SetColor("_EmissionColor", Color.green);
        steppedOn = true;
    }

    public void DeactivateLight()
    {
        tileRenderer.material.SetColor("_EmissionColor", Color.black);
        steppedOn = false;
    }

    public bool IsSteppedOn()
    {
        // Use a simple distance check for the player stepping on the tile
        float distance = Vector3.Distance(transform.position, Camera.main.transform.position);
        return distance < 0.5f; // Adjust this value as needed for accuracy
    }
}
