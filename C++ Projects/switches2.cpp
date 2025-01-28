#include <iostream>

int main() {

    char grade;

    std::cout << "Enter your grade (A, B, C, D, F): ";
    std::cin >> grade;

    switch(grade) {
        case 'A':
            std::cout << "Excellent";
            break;
        case 'B':
            std::cout << "Good";
            break;
        case 'C':
            std::cout << "Average";
            break;
        case 'D':
            std::cout << "Poor";
            break;
        case 'F':
            std::cout << "Failing";
            break;
        default:
            std::cout << "Invalid grade";
    }


    return 0;
}