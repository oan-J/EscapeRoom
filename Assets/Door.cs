using UnityEngine;

public class Door : MonoBehaviour
{
    private Vector3 initialPosition;
    private Quaternion initialRotation;

    void Start()
    {
        // Save the initial position and rotation of the door
        initialPosition = transform.position;
        initialRotation = transform.rotation;
    }

    public void Unlock()
    {
        Debug.Log("Door unlocked!");
        gameObject.SetActive(false); // Hide the door
    }

    public void Reset()
    {
        Debug.Log("Door reset!");
        gameObject.SetActive(true);  // Reactivate the door
        transform.position = initialPosition; // Reset position
        transform.rotation = initialRotation; // Reset rotation
    }
}
