#include <cmath>
#include <iostream>

// Vector class to represent a vector object in the space
class Vector {
private:
    float x, y, z;

public:
    // Constructor
    Vector(float x = 0.0, float y = 0.0, float z = 0.0) : x(x), y(y), z(z) {}

    // Getter methods for the coordinates
    float getX() const { return x; }
    float getY() const { return y; }
    float getZ() const { return z; }

    // Method to add two vectors
    Vector add(const Vector& v) const {
        return Vector(x + v.x, y + v.y, z + v.z);
    }

    // Method to subtract two vectors
    Vector subtract(const Vector& v) const {
        return Vector(x - v.x, y - v.y, z - v.z);
    }

    // Method to calculate the dot product
    float dot(const Vector& v) const {
        return x * v.x + y * v.y + z * v.z;
    }

    // Method to calculate the cross product
    Vector cross(const Vector& v) const {
        return Vector(y * v.z - z * v.y, z * v.x - x * v.z, x * v.y - y * v.x);
    }

    // Method to multiply the vector by a scalar
    Vector multiplyByScalar(float scalar) const {
        return Vector(x * scalar, y * scalar, z * scalar);
    }

    Vector normalize() const {
        float length = sqrt(x * x + y * y + z * z);
        return Vector(x / length, y / length, z / length);
    }

    // Method to print the vector
    void print() const {
        std::cout << "(" << x << ", " << y << ", " << z << ")" << std::endl;
    }
};