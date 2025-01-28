#include <iostream>

int main() {

    // pointers = variables that store the memory address of another variable
    // sometimes it is easier to work with the memory address of a variable rather than the variable itself

    // & = address of operator
    // * = value at operator

    std::string name = "John";
    int age = 30;
    std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizzas = freePizzas; // array name is a pointer to the first element of the array

    std::cout << *pName << '\n';
    std::cout << *pAge << '\n';
    std::cout << *freePizzas << '\n';




    return 0;
}