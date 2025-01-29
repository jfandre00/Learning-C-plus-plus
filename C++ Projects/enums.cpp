#include <iostream>

enum Day {Monday = 1, Tuesday = 2, Wednesday = 3, 
          Thursday = 4, Friday = 5, Saturday = 6, Sunday = 0};

enum Flavor {Chocolate, Vanilla, Strawberry}; // values are 0, 1, 2

int main() {

    // enums = a user-defined data type consisting of paired named-integral constants.
    // They are used to make a program more readable and maintainable.

    //std::string today = "Monday";
    Day today = Monday;

    switch(today) { // you can use enums or the values directly
        case Monday:
            std::cout << "Today is Monday.\n";
            break;
        case Tuesday:
            std::cout << "Today is Tuesday.\n";
            break;
        case Wednesday:
            std::cout << "Today is Wednesday.\n";
            break;
        case Thursday:
            std::cout << "Today is Thursday.\n";
            break;
        case Friday:
            std::cout << "Today is Friday.\n";
            break;
        case Saturday:     
            std::cout << "Today is Saturday.\n";
            break;
        case Sunday:
            std::cout << "Today is Sunday.\n";
            break;

    }

    return 0;
}