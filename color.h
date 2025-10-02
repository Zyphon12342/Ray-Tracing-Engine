#ifndef COLOR_H
#define COLOR_H

#include "rtweekend.h"


using color = vec3; 

void write_color(std::ostream& out, const color& pixel_color) {
    auto r = pixel_color.x(); 
    auto g = pixel_color.y(); 
    auto b = pixel_color.z(); 

    // Translate the [0,1] components values to the byte range [0,255].

    int rbyte = int(255.999 * r);
    int gbyte = int(255.999 * g);
    int bbyte = int(255.999 * b);
    
    // Translate the [0,1] component values to the byte range [0,255].

    static const interval intesity(0.000, 0.999);
    int rbyte = int(256 * intesity.clamp(r));
    int gbyte = int(256 * intesity.clamp(g));
    int bbyte = int(256 * intesity.clamp(b));
    

    // Write out the pixel color components. 

    out << rbyte << ' ' << gbyte << ' ' << bbyte << '\n'; 
}

#endif