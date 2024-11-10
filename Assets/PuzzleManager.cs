using UnityEngine;

public class PuzzleManager : MonoBehaviour
{
    public static PuzzleManager Instance;
    private int correctLetters = 0;
    public int totalLetters = 4; // Total letters required for puzzle completion

    private void Awake()
    {
        // Singleton pattern to ensure only one instance exists
        if (Instance == null) Instance = this;
        else Destroy(gameObject);
    }

    public void IncrementCorrectLetterCount()
    {
        correctLetters++;
        if (correctLetters >= totalLetters)
        {
            Debug.Log("Puzzle completed!");
            // Trigger completion effect here (e.g., unlock door or proceed to the next level)
        }
    }

    public void DecrementCorrectLetterCount()
    {
        if (correctLetters > 0)
        {
            correctLetters--;
        }
    }
}
