using UnityEngine;
using System.Collections;

public class SequenceChecker : MonoBehaviour
{
    public ParticleSystem greySystem; 
    public ParticleSystem goldenSystem; 
    public AudioSource audioSource;
    private string[][] sequenceGroups = new string[][]
    {
        new string[] {"GPVFX_Bottle_A", "GPVFX_POTION A"},
        new string[] {"GPVFX_Bottle_B", "GPVFX_POTION B"},
        new string[] {"GPVFX_Bottle_C", "GPVFX_POTION C"}
    };

    private int currentGroupIndex = 0; 
    private bool[] groupHitFlags; 
    private int expectedNextIndex = 0; 

    void Start()
    {
        greySystem.Play();
        Debug.Log("sequencechecker in! bottle potion[]");
        groupHitFlags = new bool[sequenceGroups[currentGroupIndex].Length];
    }

    void OnTriggerEnter(Collider other)
    {
        Debug.Log(other.gameObject.name + " collides with " + gameObject.name);
        int hitIndex = System.Array.IndexOf(sequenceGroups[currentGroupIndex], other.gameObject.name);
        Debug.Log($"hitIndex:{hitIndex}");
        if (hitIndex != -1) 
        {
            if (hitIndex == expectedNextIndex)
            {
                groupHitFlags[hitIndex] = true;
                expectedNextIndex++;
                Debug.Log($"Correct trigger: {other.gameObject.name}. Expected next index now {expectedNextIndex}.");
                StartCoroutine(ShowGoldenEffect(true)); 

                if (IsGroupCompleted())
                {
                    Debug.Log("Sequence completed. Prepare for the next group.");
                    currentGroupIndex++;
                    if (currentGroupIndex < sequenceGroups.Length)
                    {
                        groupHitFlags = new bool[sequenceGroups[currentGroupIndex].Length];
                        expectedNextIndex = 0;
                        greySystem.Play();
                    }
                    else
                    {
                        greySystem.Stop();
                        Debug.Log("All sequences completed.");
                        PlayGoldenSystemContinuously(); 
                        
                        
                        if (!audioSource.isPlaying) {
                            audioSource.Play();
                        }
                    }
                }
            }
            else if (hitIndex == 0) 
            {
                Debug.Log("Restarting sequence with the correct first item.");
                ResetCurrentGroup();
                groupHitFlags[hitIndex] = true;
                expectedNextIndex++;
                StartCoroutine(ShowGoldenEffect(true));
            }
            else
            {
                Debug.Log("Sequence error: resetting current sequence.");
                ResetCurrentGroup();
            }
        }
    }

    private void ResetCurrentGroup()
    {
        groupHitFlags = new bool[sequenceGroups[currentGroupIndex].Length];
        expectedNextIndex = 0;
        currentGroupIndex = 0;
        greySystem.Play();
    }

    private bool IsGroupCompleted()
    {
        for (int i = 0; i < groupHitFlags.Length; i++)
        {
            if (!groupHitFlags[i])
            {
                Debug.Log($"Group not complete, item at index {i} not triggered.");
                return false;
            }
        }
        return true;
    }

    IEnumerator ShowGoldenEffect(bool brief)
    {
        goldenSystem.Play();
        if (brief)
        {
            yield return new WaitForSeconds(1); 
            goldenSystem.Stop();
        }
    }

    IEnumerator PlayGoldenSystemContinuously()
    {
        goldenSystem.Play();
        yield return new WaitForSeconds(10000); // Wait for 10 seconds
        //goldenSystem.Stop();
    }
}