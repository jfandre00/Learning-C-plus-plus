#include <iostream>

int main() {

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "*********** CALCULATOR ***********\n";
    std::cout << "Enter either +, -, *, or /: ";
    std::cin >> op;

    std::cout << "Enter number 1: ";
    std::cin >> num1;

    std::cout << "Enter number 2: ";
    std::cin >> num2;

    switch(op) {
        case '+':
            result = num1 + num2;
            std::cout << "The sum of " << num1 << " and " << num2 << " is " << result << std::endl;
            break;
        case '-':
            result = num1 - num2;
            std::cout << "The difference of " << num1 << " and " << num2 << " is " << result << std::endl;
            break;
        case '*':
            result = num1 * num2;
            std::cout << "The product of " << num1 << " and " << num2 << " is " << result << std::endl;
            break;
        case '/':
            result = num1 / num2;
            std::cout << "The quotient of " << num1 << " and " << num2 << " is " << result << std::endl;
            break;
        default:
            std::cout << "Invalid operator" << std::endl;
            
    }



    std::cout << "***********************************";

    return 0;
}