#include <iostream>

void printInfo(const std::string name, const int age);

int main() {

    // const parameters are used to prevent the modification of the actual arguments
    // code is more secure and easier to understand

    std::string name = "Andre";
    int age = 44;


    printInfo(name, age);


    return 0;
}


void printInfo(const std::string name, const int age) {
    // now you can't modify the actual arguments because they are const
    std::cout << name << '\n';
    std::cout << age << '\n';
}