using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Mathematics;
using CesiumForUnity;

public class CameraControl : MonoBehaviour
{
    [SerializeField] CesiumGlobeAnchor CesiumCam;
    [SerializeField] GameObject Controller;

    // Start is called before the first frame update
    void Start()
    {
        // CesiumCam.longitudeLatitudeHeight = new double3(-121.8995741, 37.4323341, 15.0);
    }

    // Update is called once per frame
    void Update()
    {
        // Debug.Log(CesiumCam.longitudeLatitudeHeight);
        // CesiumCam.gameObject.transform.position = Controller.transform.position;
        // CesiumCam.gameObject.transform.rotation = Controller.transform.rotation;
    }
}
