#include <iostream>

int main() {

    // dynamic memory = Memory that is allocated after the program is already compiled and running
    // use the 'new' operator to allocate memory in the heap rather than the stack

    // useful when we don't know how much memory we will need at runtime. Makes our program more
    // flexible especially when dealing with user input

    int *pNum = NULL;

    pNum = new int;

    *pNum = 21;

    std::cout << "address: " << pNum << " value: " << *pNum << '\n';

    delete pNum;

    // array

    char *pGrades = NULL;

    // we don't know how many grades we will have at runtime, we will ask the user via input
    // we will use a pointer to allocate memory for the array

    int size;

    std::cout << "How many grades to enter in?: ";
    std::cin >> size;

    pGrades = new char[size];

    for(int i = 0; i < size; i++) {
        std::cout << "Enter grade #" << i + 1 << ": ";
        std::cin >> pGrades[i];
    }

    for(int i = 0; i < size; i++) {
        std::cout << "Grade #" << i + 1 << ": " << pGrades[i] << '\n';
    }

    delete[] pGrades; // delete array when done to prevent memory leak



    return 0;
}