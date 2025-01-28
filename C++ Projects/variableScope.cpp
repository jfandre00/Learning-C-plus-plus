#include <iostream>

int myNum = 1; // global variable

void printNum();

int main() {

    // local variables = declared inside a function or block {}
    // global variables = declared outside of all functions

    
    printNum();

    int myNum = 3; // local variable
    std::cout << myNum << '\n';

    // to use the global variable, use the scope resolution operator ::
    std::cout << ::myNum << '\n';


    return 0;
}


void printNum() {
    int myNum = 5; // local variable
    std::cout << myNum << '\n';

    // to use the global variable, use the scope resolution operator ::
    std::cout << ::myNum << '\n';
}