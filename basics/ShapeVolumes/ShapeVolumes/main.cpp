//
//  main.cpp
//  ShapeVolumes
//
//  Created by Mark Calvelo on 10/29/20.
//

#include <iostream>
#include <cmath>

/*Goal: practice arithmetic operations in C++
**Write a program that calculates the volumes of:
**a cube, sphere, cone.
**Cube Volume = side^3
**Sphere Volume = (4/3) * pi * radius^3
**Cone Volume = pi * radius^2 * (height/3)
**Write the values to the console.
*/

float cubeVolume(float side);
float sphereVolume(float radius);
float coneVolume(float radius, float height);

int main() {
    // Dimension of the cube
    float cubeSide = 5.4;
    // Dimension of sphere
    float sphereRadius = 2.33;
    // Dimensions of cone
    float coneRadius = 7.65;
    float coneHeight = 14;
    
    float volCube, volSphere, volCone = 0;
    volCube = cubeVolume(cubeSide);
    volSphere = sphereVolume(sphereRadius);
    
    std::cout << "The volume of cube is " << volCube << std::endl;
    std::cout << "The volume of sphere is " << volSphere << "\n";
    return 0;
}

float cubeVolume(float side) {
    return std::pow(side, 3);
}

float sphereVolume(float radius) {
    return 4 / 3 * M_PI * pow(radius, 3);
}
