#include <iostream>

int main() {

    // Type conversion in C++ is the conversion of one data type into another data type.
    // There are two types of type conversion in C++:
    // 1. Implicit Type Conversion - This type of conversion is done automatically by the compiler.
    // 2. Explicit Type Conversion - This type of conversion is done manually by the programmer.

    int x = 3.14;
    double y = 3.14;
    double z = (int) 3.14;

    
    std::cout << x << std::endl; // Output: 3

    std::cout << y << std::endl; // Output: 3.14

    char a = 100;

    std::cout << a << std::endl; // Output: d (converted ASCII value of 100)
    std::cout << (char) 100 << std::endl; // Output: d

    int correct = 8;
    int questions = 10;

    double score = correct / (double)questions * 100; // Explicit type conversion

    std::cout << score << "%" << std::endl; // Output: 80


    


    return 0;
}