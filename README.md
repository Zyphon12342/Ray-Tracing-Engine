#BLUE-WHITE gradient using rays

### 1. Configure and build the project
mkdir build && cd build
cmake ..

### 2. Clean, rebuild, generate image.ppm, and open in mpv
cmake --build . --target clean_view

This will:
- Remove old binaries and images  
- Recompile the program  
- Run the ray tracer → image.ppm  
- Open it in mpv  

✅ If you only want to build (without running), use:
cmake --build .

✅ If you only want to view the image (after it’s built), use:
cmake --build . --target view
