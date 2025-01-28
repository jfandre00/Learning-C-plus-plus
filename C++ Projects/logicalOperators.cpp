#include <iostream>

int main() {

    // && = check if both conditions are true
    // || = check if at least one condition is true
    // ! = check if the condition is false

    int temp;
    bool sunny = true;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if(temp > 0 && temp < 30) {
        std::cout << "The temperature is good!";
    } else { 
        std::cout << "The temperature is bad!";
    }

    if(temp <= 0 || temp >= 30) {
        std::cout << "\nThe temperature is bad!";
    } else {
        std::cout << "\nThe temperature is good!";
    }

    if(!sunny) {
        std::cout << "\nIt's sunny!";
    } else {
        std::cout << "\nIt's cloudy!";
    }


    return 0;
}