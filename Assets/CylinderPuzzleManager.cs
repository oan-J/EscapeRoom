using UnityEngine;

public class CylinderPuzzleManager : MonoBehaviour
{
    public static CylinderPuzzleManager Instance;

    private int correctCylinders = 0;
    public int totalCylinders = 2; // Number of cylinders in the puzzle

    private void Awake()
    {
        // Singleton pattern for global access
        if (Instance == null) Instance = this;
        else Destroy(gameObject);
    }

    public void CylinderCorrect()
    {
        correctCylinders++;
        Debug.Log($"Cylinders Correct: {correctCylinders}/{totalCylinders}");
        if (correctCylinders >= totalCylinders)
        {
            Debug.Log("Puzzle Completed! All cylinders are aligned!");
            // Trigger any puzzle completion effects, e.g., opening a door
        }
    }

    public void CylinderIncorrect()
    {
        if (correctCylinders > 0)
        {
            correctCylinders--;
            Debug.Log($"Cylinders Correct: {correctCylinders}/{totalCylinders}");
        }
    }
}
