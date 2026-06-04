# carp-gamecam Examples

## Basic View-Projection Matrix Generation
```clojure
(load "camera.carp")
(use Camera)
(use Vector3)

(defn main []
  (let [pos (Vector3.init 0.0 0.0 5.0)
        aspect 1.77
        cam (Camera.new pos -90.0 0.0 aspect)]
    (do
      (let [view (Camera.look-at &cam)
            proj (Camera.perspective &cam)]
        (println* "Ready for GPU upload!")))))
```

## Creating a Fly-Cam
```clojure
(load "camera.carp")
(use Camera)
(use Vector3)

(defn update-camera [cam dx dy dt]
  (do
    ;; 1. Update Rotation (Yaw/Pitch)
    (Camera.rotate! cam (* dx 0.1) (* dy 0.1))
    
    ;; 2. Move Forward using Basis Vectors
    (Camera.move-forward! cam (* 5.0 dt))))
```
