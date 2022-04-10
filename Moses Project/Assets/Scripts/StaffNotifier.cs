using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StaffNotifier : MonoBehaviour
{
    // destroy a game object with a TextMesh attached if a trigger collides with this object
    public GameObject trigger;
    public GameObject notificationObject;

    void OnCollisionEnter(Collision col)
    {
        if ( col.gameObject.name == trigger.name )
            Destroy(notificationObject);
    }
}
