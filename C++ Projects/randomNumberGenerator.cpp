#include <iostream>
#include <ctime>

int main() {

    // pseudo-random = NOT truly random (but close)

    srand(time(NULL)); // seed number = current time

    int num1 = rand() % 6; // 0 - 5
    num1 += 1; // 1 - 6

    int num2 = rand() % 6 + 1; // 1 - 6
    int num3 = rand() % 6 + 1; // 1 - 100

    std::cout << num1 << "\n";
    std::cout << num2 << "\n";
    std::cout << num3 << "\n";


    return 0;
}