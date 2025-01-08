#include <iostream>

int main() {
    // The const keyword specifies that a variable's value is constant and tells the compiler to prevent anything modifying it.
    // (read-only)

    const double PI = 3.14159;
    const double E = 2.71828;
    const int LIGHT_SPEED = 299792458; // m/s
    const int WIDTH = 1920;
    const int HEIGHT = 1080;

    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";


    return 0;
}