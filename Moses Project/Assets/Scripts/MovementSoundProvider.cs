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
        Debug.Log("velocity magnitude: " + player.velocity.magnitude);
        if ( player.velocity.x >= 0.2 || player.velocity.y >= 0.2 )
        {
            walkingSFX.Play();
        }
        else
        {
            walkingSFX.Stop();
        }
    }
}
