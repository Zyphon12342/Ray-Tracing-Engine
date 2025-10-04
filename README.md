# Material SPHERES interacting on Blue-White gradient using rays and AntiAliasing + Diffusion + Gamma Correction + Lambert Reflection

### 1. Configure and build the project
```bash
mkdir build && cd build
cmake ..
```

### 2. Clean, rebuild, generate image.ppm, and open in mpv
```bash
cmake --build . --target clean_view
```
This will:
- Remove old binaries and images  
- Recompile the program  
- Run the ray tracer → image.ppm  
- Open it in mpv  

✅ If you only want to build (without running), use:
```bash
cmake --build .
```
✅ If you only want to view the image (after it’s built), use:
```bash
cmake --build . --target view
```
### Preview of Depth of field effect (Defocus_Blur)
![defocus blur](assets/defcosballs.png)

### Camera rotation + VFOV
<p>
  <img src="assets/rotatefar.png" alt="90° VFOV" width="45%" style="margin-right:10px;">
  <img src="assets/rotateclose.png" alt="115° VFOV" width="45%">
</p>

### 90 vs 115 vFOV for same picture
<p>
  <img src="assets/90VFOV.png" alt="90° VFOV" width="45%" style="margin-right:10px;">
  <img src="assets/115VFOV.png" alt="115° VFOV" width="45%">
</p>

### Preview for Glass ball refraction (With TIR) with Schlick's Approximation
![Glass material refraction](assets/SchlicksTIR.png)







