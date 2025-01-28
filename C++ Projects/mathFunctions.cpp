#include <iostream>
#include <cmath>

int main() {

    double x = 3;
    double y = 4;
    double z;

    // Max function

    z = std::max(x, y);

    std::cout << "Max value is: " << z << std::endl;

    // Min function

    z = std::min(x, y);

    std::cout << "Min value is: " << z << std::endl;

    // Power function

    z = std::pow(x, y);

    std::cout << "Power value is: " << z << std::endl;

    // Square root function

    z = std::sqrt(x);

    std::cout << "Square root value is: " << z << std::endl;

    // Absolute value function

    z = std::abs(-x);

    std::cout << "Absolute value is: " << z << std::endl;

    x = 3.14159265;

    // Round function

    z = std::round(x);

    // Ceil - round up

    z = std::ceil(x);

    // Floor - round down

    z = std::floor(x);



    return 0;
}