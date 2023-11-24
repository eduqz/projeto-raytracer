#include <cmath>
#include <iostream>

// Color struct to represent a normalized RGB color
struct Color {
    float r, g, b; // Red, green, and blue components of the color

    // Constructor to initialize the color
    Color(float r, float g, float b) : r(r), g(g), b(b) {}

    // Method to print the color
    void print() const {
        std::cout << "Color(RGB): (" << r << ", " << g << ", " << b << ")" << std::endl;
    }
};
