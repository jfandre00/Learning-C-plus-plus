#include <iostream>

int main() {

    // do while loop = do some block of code first, then repeat again if the condition is true

    int number;

    do {
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    } while(number  < 0);

    std::cout << "You entered: " << number << "\n";



    return 0;
}