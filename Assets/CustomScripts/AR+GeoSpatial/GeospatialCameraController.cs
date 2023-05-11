using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using Google.XR.ARCoreExtensions;
using CesiumForUnity;
using Unity.Mathematics;

public class GeospatialCameraController : MonoBehaviour
{
    private AREarthManager _earthManager;
    [SerializeField] CesiumGlobeAnchor CameraAnchor;

    IEnumerator VPSCoroutine(VpsAvailabilityPromise promise)
    {
        var retry = 0;
        while (promise.State == PromiseState.Pending)
        {
            if (retry == 100)
            {
                Debug.LogError("Nope, no VPS");
            }

            yield return new WaitForSeconds(0.1f);
            retry = Math.Min(retry + 1, 100);
        }

        yield return promise;
        Debug.Log($"VPS Available?: {promise.Result}");
    }

    void Awake()
    {
        GameObject earthManagerGO = new GameObject("AREarthManager", typeof(AREarthManager));
        _earthManager = earthManagerGO.GetComponent<AREarthManager>();
        if (_earthManager == null)
        {
            Debug.LogError("Failed to initialize AREarthManager");
        }

        // var promise = AREarthManager.CheckVpsAvailabilityAsync(30.402094052044337, -97.7257999601979);
        // StartCoroutine(VPSCoroutine(promise));
    }

    void Update()
    {
        var earthTrackingState = _earthManager.EarthTrackingState;
        if (earthTrackingState == TrackingState.Tracking)
        {
            // camera_geospatial_pose contains geodetic location, rotation, and
            // confidences values.
            var cameraGeospatialPose = _earthManager.CameraGeospatialPose;

            CameraAnchor.longitudeLatitudeHeight = new double3(cameraGeospatialPose.Longitude, cameraGeospatialPose.Latitude, cameraGeospatialPose.Altitude);
            // CameraAnchor.gameObject.transform.rotation = cameraGeospatialPose.EunRotation;

            // Debug.Log(cameraGeospatialPose.HorizontalAccuracy);
        }
    }
}
