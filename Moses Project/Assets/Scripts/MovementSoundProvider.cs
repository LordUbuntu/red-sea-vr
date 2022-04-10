using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovementSoundProvider : MonoBehaviour
{
    public AudioSource walkingSFX;

    private CharacterController player;
    private float waitTime;

    // Start is called before the first frame update
    void Start()
    {
        player = GetComponent<CharacterController>();
        waitTime = 0;
    }

    // Update is called once per frame
    void Update()
    {
        if ( walkingSFX.isPlaying == false )
        {
            Debug.Log("velocity magnitude: " + player.velocity.magnitude);
            if ( player.velocity.magnitude >= 0.2 )
            {
                Debug.Log("playing sound");
                walkingSFX.Play();
            }
            else
            {
                Debug.Log("stopping sound");
                walkingSFX.Stop();
            }
        }
    }
}
