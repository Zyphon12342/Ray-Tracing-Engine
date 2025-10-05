cmake_minimum_required(VERSION 3.10)
project(RayTracer)

add_executable(main main.cpp)

add_custom_target(run
    COMMAND ./main > image.ppm
    DEPENDS main
    COMMENT "Running ray tracer to generate image.ppm"
)

add_custom_target(view
    COMMAND mpv image.ppm
    DEPENDS run
    COMMENT "Opening image.ppm with mpv"
)

add_custom_target(clean_build
    COMMAND ${CMAKE_COMMAND} -E remove -f main image.ppm
    COMMAND ${CMAKE_COMMAND} --build .
    COMMENT "Clean build: deleted main and image.ppm, rebuilding..."
)

# 🚀 New target: clean_view
add_custom_target(clean_view
    COMMAND ${CMAKE_COMMAND} -E remove -f main image.ppm
    COMMAND ${CMAKE_COMMAND} --build . --target view
    COMMENT "Clean build, regenerate image.ppm, and view with mpv"
)
