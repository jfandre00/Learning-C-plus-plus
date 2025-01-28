#include <iostream>

int main() {

    // ternary operator ?: = replacement to an if-else statement
    // condition ? expression1 : expression2

    int grade = 75;

    (grade >= 60) ? std::cout << "Passed" : std::cout << "Failed";

    int number = 9;
    number % 2 == 1 ? std::cout << "\nNumber is odd" : std::cout << "\nNumber is even";

    bool hungry = true;

    //hungry ? std::cout << "\nGo eat something" : std::cout << "\nYou're not hungry";
    std::cout << (hungry ? "\nGo eat something" : "\nYou're not hungry");

    return 0;
}