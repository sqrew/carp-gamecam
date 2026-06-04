# carp-gamecam
A high-performance 3D perspective camera for the Carp programming language.

## Features
- **Standardized**: Uses Carp's internal `Vector3` library for seamless integration with the ecosystem.
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
(use Vector3)

;; Create a new camera
(let [cam (Camera.new (Vector3.init 0.0 0.0 10.0) -90.0 0.0 1.77)]
  (do
    ;; Generate matrices for the GPU
    (let [view (Camera.look-at &cam)
          proj (Camera.perspective &cam)]
      (println* "Ready for GPU upload!"))))
```

## License
MIT
