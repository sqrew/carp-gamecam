# carp-gamecam
A high-performance, self-contained 3D perspective camera for the Carp programming language.

## Features
- **Zero Dependencies**: Includes its own minimal 3D math (Vec3, Mat4) optimized for spatial orchestration.
- **WGPU Ready**: Generates 4x4 matrices in column-major order, compatible with modern graphics APIs.
- **LookAt & Perspective**: Standard functions for generating View and Projection matrices.
- **FlyCam Support**: Integrated Yaw/Pitch orientation logic for easy 3D navigation.

## Installation
```clojure
(load "https://github.com/sqrew/carp-gamecam@master")
```

## Usage
```clojure
(use Camera)
(use Vec3)

;; Create a new camera
(let [cam (Camera.new (Vec3.new 0.0 0.0 10.0) (Vec3.new 0.0 0.0 0.0) 1.77)]
  (do
    ;; Generate matrices for the GPU
    (let [view (Camera.look-at &cam)
          proj (Camera.perspective &cam)]
      (println* "View Matrix: " (str &view)))))
```

## License
MIT
