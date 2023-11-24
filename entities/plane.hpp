#include <cmath>
#include <iostream>
#include "point.hpp"
#include "color.hpp"
#include "vector.hpp"

// Plane class to represent a plane in space
class Plane {
private:
    Point point;    // A point on the plane
    Vector normal;  // A normal vector to the plane
    Color color;    // Color of the plane

public:
    // Constructor to initialize the plane with a point, normal vector, and color
    Plane(const Point& point, const Vector& normal, const Color& color) : point(point), normal(normal), color(color) {}

    // Method to get the point on the plane
    Point getPoint() const { return point; }

    // Method to get the normal vector of the plane
    Vector getNormal() const { return normal; }

    // Method to get the color of the plane
    Color getColor() const { return color; }

    // Method to print the plane's information
    void print() const {
        std::cout << "Plane Point: ";
        point.print();
        std::cout << "Normal Vector: ";
        normal.print();
        color.print();
    }
};