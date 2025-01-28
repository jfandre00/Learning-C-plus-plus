#include <iostream>


int main() {

    // Arrays should all be the same data type.

    std::string bikes[3]; // you must specify the size of the array

    bikes[0] = "Ninja";
    bikes[1] = "Hayabusa";
    bikes[2] = "R1";

    std::string cars[] = {"Mustang", "Corvette", "Renegade"};

    cars[0] = "Ferrari";

    std::cout << cars[1] << '\n'; // Output: Corvette
    std::cout << cars[0] << '\n'; // Output: Mustang

    double prices[] = {5.0, 7.50, 9.99, 15.00};

    std::cout << prices[2] << '\n'; // Output: 9.99




    return 0;
}