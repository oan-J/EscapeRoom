using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    public float speed = 3.0f;  // Speed of the player movement

    private OVRCameraRig cameraRig;

    private void Start()
    {
        cameraRig = GetComponent<OVRCameraRig>();
    }

    private void Update()
    {
        // Get the Oculus Touch Thumbstick axes
        Vector2 input = OVRInput.Get(OVRInput.Axis2D.PrimaryThumbstick);

        // Calculate forward movement direction
        Vector3 forward = cameraRig.centerEyeAnchor.forward;
        Vector3 right = cameraRig.centerEyeAnchor.right;
        forward.y = 0;
        right.y = 0;
        forward.Normalize();
        right.Normalize();

        // Apply movement based on input and direction
        Vector3 desiredMoveDirection = (forward * input.y + right * input.x) * speed * Time.deltaTime;
        transform.position += desiredMoveDirection;
    }
}