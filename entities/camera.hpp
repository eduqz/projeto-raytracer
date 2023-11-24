#include <cmath>
#include <iostream>
#include "point.hpp"
#include "vector.hpp"

// Camera class to represent the scene camera object
class Camera {
private:
    Point location;      // Camera's location
    Point target;        // Point where the camera is pointing
    Vector v_up;         // Vector pointing upwards
    Vector w, v, u;      // Orthonormal vectors
    float distance;      // Distance from the camera to the screen
    int v_res, h_res;    // Vertical and horizontal screen resolutions

public:
    // Constructor
    Camera(Point location, Point target, Vector v_up, float distance, int v_res, int h_res) 
        : location(location), target(target), v_up(v_up), distance(distance), v_res(v_res), h_res(h_res) {
        calculateOrthonormalBasis();
    }

    // Method to calculate the orthonormal basis
    void calculateOrthonormalBasis() {
        w = Vector(location.getX() - target.getX(), location.getY() - target.getY(), location.getZ() - target.getZ()).normalize();
        u = v_up.cross(w).normalize();
        v = w.cross(u);
    }

    // Method to map a pixel on the screen
    Point mapPixelToScreen(int px, int py) const {
        float x = (px - h_res / 2.0f) * distance / h_res;
        float y = (py - v_res / 2.0f) * distance / v_res;
        Vector displacement = u.multiplyByScalar(x).add(v.multiplyByScalar(y));
        return Point(location.getX() + displacement.getX(), location.getY() + displacement.getY(), location.getZ() + displacement.getZ());
    }
};

int main() {
    // Creation and use of the camera (example)
    Camera camera(Point(0, 0, 0), Point(0, 0, -1), Vector(0, 1, 0), 1.0, 800, 600);

    // Map a pixel to a point on the screen
    Point screenPoint = camera.mapPixelToScreen(400, 300); // Center of the screen
    screenPoint.print(); // Display the coordinates of the mapped point

    return 0;
}