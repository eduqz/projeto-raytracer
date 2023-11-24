#include <cmath>
#include <iostream>
#include "point.hpp"
#include "color.hpp"

// Sphere class to represent a sphere in three-dimensional space
class Sphere {
private:
    Point center; // Center of the sphere
    float radius; // Radius of the sphere
    Color color;  // Color of the sphere

public:
    // Constructor to initialize the sphere with a center, radius, and color
    Sphere(const Point& center, float radius, const Color& color) : center(center), radius(radius), color(color) {}

    // Method to get the center of the sphere
    Point getCenter() const { return center; }

    // Method to get the radius of the sphere
    float getRadius() const { return radius; }

    // Method to get the color of the sphere
    Color getColor() const { return color; }

    // Method to print the sphere's information
    void print() const {
        std::cout << "Sphere Center: ";
        center.print();
        std::cout << "Radius: " << radius << std::endl;
        color.print();
    }
};
