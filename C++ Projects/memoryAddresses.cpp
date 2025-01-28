#include <iostream>

int main() {

    // memory address = a location in memory where a value is stored
    // & = address of operator

    std::string name = "Andre";
    int age = 44;
    bool student = true;

    std::cout << &name << '\n'; // 0x7fffbf3b3b10 - Hexadecimal memory address
    std::cout << &age << '\n'; // 0x7fffbf3b3b14
    std::cout << &student << '\n'; // 0x7fffbf3b3b15

    


    return 0;
}