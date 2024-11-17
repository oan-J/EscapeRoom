using UnityEngine;

public class RayInteraction : MonoBehaviour
{
    public float maxRayDistance = 10.0f;
    public LayerMask interactionLayers; // To filter which layers are interactable

    private void Update()
    {
        CheckController(OVRInput.Controller.RTouch);
        CheckController(OVRInput.Controller.LTouch);
    }

    void CheckController(OVRInput.Controller controller)
    {
        if (OVRInput.Get(OVRInput.Button.PrimaryIndexTrigger, controller))
        {
            RaycastHit hit;
            Vector3 rayOrigin = OVRInput.GetLocalControllerPosition(controller);
            Vector3 rayDirection = transform.forward; // Adjust if the controller orientation is used

            Debug.DrawRay(rayOrigin, rayDirection * maxRayDistance, Color.red);

            if (Physics.Raycast(rayOrigin, rayDirection, out hit, maxRayDistance, interactionLayers))
            {
                Debug.Log(controller.ToString() + " Hit: " + hit.transform.name);
                // Add interaction logic here
            }
        }
    }
}