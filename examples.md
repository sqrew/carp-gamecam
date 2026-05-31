# carp-gamecam Examples

## Basic View-Projection Matrix Generation
```clojure
(load "camera.carp")
(use Camera)
(use Vec3)

(defn main []
  (let [pos (Vec3.new 0.0 0.0 5.0)
        target (Vec3.new 0.0 0.0 0.0)
        aspect 1.77
        cam (Camera.new pos target aspect)]
    (do
      (let [view (Camera.look-at &cam)
            proj (Camera.perspective &cam)]
        (println* "Ready for GPU upload!")))))
```

## Creating a Fly-Cam
```clojure
(load "camera.carp")
(use Camera)
(use Vec3)

(defn update-camera [cam dx dy dt]
  (do
    ;; 1. Update Rotation
    (Camera.set-yaw! cam (+ @(Camera.yaw cam) (* dx 0.1)))
    (Camera.set-pitch! cam (Double.clamp -89.0 89.0 (- @(Camera.pitch cam) (* dy 0.1))))
    
    ;; 2. Update Orientation
    (Camera.update-orientation! cam)
    
    ;; 3. Move Forward
    (let [front (Vec3.normalize &(Vec3.sub (Camera.target cam) (Camera.pos cam)))
          pos (Camera.pos cam)]
      (Camera.set-pos! cam (Vec3.add pos &(Vec3.mul &front (* 5.0 dt)))))))
```
