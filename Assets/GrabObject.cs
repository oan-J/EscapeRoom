using UnityEngine;

public class GrabObject : MonoBehaviour
{
    private bool isGrabbed;
    private Transform originalParent;

    void Start()
    {
        originalParent = transform.parent;
    }

    void Update()
    {
        if (isGrabbed)
        {
            transform.position = OVRInput.GetLocalControllerPosition(OVRInput.Controller.RTouch) + originalParent.position;
            transform.rotation = OVRInput.GetLocalControllerRotation(OVRInput.Controller.RTouch);
        }
    }

    public void GrabMe()
    {
        isGrabbed = true;
        GetComponent<Rigidbody>().isKinematic = true;
    }

    public void ReleaseMe()
    {
        isGrabbed = false;
        GetComponent<Rigidbody>().isKinematic = false;
    }
}