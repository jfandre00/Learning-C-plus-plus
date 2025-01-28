#include <iostream>

// cout << (insertion operation)
// cin >> (extraction operation)

int main() {

    std::string name;
    std::string lastname;
    int age;

    std::cout << "Enter your name: ";
    std::cin >> name;

    std::cout << "What is your full last name? ";
    std::getline(std::cin >> std::ws, lastname); // This line is necessary to avoid the program skipping the input of the last name.

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Hello, " << name << "!" << '\n';
    std::cout << "Your full name is " << name << " " << lastname << "." << '\n';
    std::cout << "You are " << age << " years old.";

    return 0;
}