using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovementSoundProvider : MonoBehaviour
{
    public AudioSource walkingSFX;
    private CharacterController player;

    // Start is called before the first frame update
    void Start()
    {
        player = GetComponent<CharacterController>();
    }

    // Update is called once per frame
    void Update()
    {
        // play sound if not playing and player moving
        if ( walkingSFX.isPlaying == false )
            if ( player.velocity.magnitude >= 0.2 )
                walkingSFX.Play();
    }
}
