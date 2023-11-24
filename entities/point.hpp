#include <cmath>
#include <iostream>

class Point {
private:
    float x, y, z;

public:
    // Constructor
    Point(float x = 0.0, float y = 0.0, float z = 0.0) : x(x), y(y), z(z) {}

    // Getter methods for the coordinates
    float getX() const { return x; }
    float getY() const { return y; }
    float getZ() const { return z; }

    // Method to calculate the distance to another point
    float distanceTo(const Point& p) const {
        return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2) + pow(z - p.z, 2));
    }

    // Method to add two points
    Point add(const Point& p) const {
        return Point(x + p.x, y + p.y, z + p.z);
    }

    // Method to subtract two points
    Point subtract(const Point& p) const {
        return Point(x - p.x, y - p.y, z - p.z);
    }

    // Method to print the point
    void print() const {
        std::cout << "(" << x << ", " << y << ", " << z << ")" << std::endl;
    }
};