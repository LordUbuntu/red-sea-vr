using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// this will remove or animate a GameObject when it collide
//      with another GameObject that has a specific name.
public class SeaSplitWatcher : MonoBehaviour
{
    public GameObject trigger;
    public GameObject[] removeable;
    [Range(0.0f, 100.0f)] public float speed;
    [Range(0.0f, -1000.0f)] public float threshold;

    private bool moving;

    void move()
    {
        if (moving)
        {
            Vector3 moveDir = new Vector3(0.0f, -1.0f, 0.0f) * speed * Time.deltaTime;
            foreach (GameObject obj in removeable)
            {
                obj.transform.position += moveDir;
            }
            this.transform.position += moveDir;
        }
        if (this.transform.position.y < threshold)
        {
            foreach (GameObject obj in removeable)
            {
                Destroy(obj);
            }
            Destroy(this.gameObject);
        }
    }

    void OnCollisionEnter(Collision col)
    {
        if ( col.gameObject.name == trigger.name )
        {
            moving = true;
        }
    }

    // Start is called before the first frame update
    void Start() {
        moving = false;
    }

    // Update is called once per frame
    void Update() {
        move();
    }
}
