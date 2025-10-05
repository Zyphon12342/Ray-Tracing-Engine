#ifndef COLOR_H
#define COLOR_H

#include "interval.h"
#include "vec3.h"


using color = vec3; 


inline double linear_to_game(double linear_component) {
    if(linear_component > 0) {
        return std::sqrt(linear_component);
    }

    return 0;
}


void write_color(std::ostream& out, const color& pixel_color) {
    auto r = pixel_color.x(); 
    auto g = pixel_color.y(); 
    auto b = pixel_color.z(); 

    // Apply a linear to gamma transform for gamma 2
    
    r = linear_to_game(r);
    g = linear_to_game(g);
    b = linear_to_game(b);
    
    // Translate the [0,1] component values to the byte range [0,255].

    static const interval intesity(0.000, 0.999);

    int rbyte = int(256 * intesity.clamp(r));
    int gbyte = int(256 * intesity.clamp(g));
    int bbyte = int(256 * intesity.clamp(b));
    

    // Write out the pixel color components. 

    out << rbyte << ' ' << gbyte << ' ' << bbyte << '\n'; 
}

#endif