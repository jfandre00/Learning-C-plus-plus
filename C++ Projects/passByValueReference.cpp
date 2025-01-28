#include <iostream>

void swap(std::string &x, std::string &y);

int main() {

    std::string x = "Kool-Aid";
    std::string y = "Water";

    swap(x, y);

    std::cout << "x: " << x << '\n';
    std::cout << "y: " << y << '\n';

    return 0;
}

void swap(std::string &x, std::string &y) {

    std::string temp;
    temp = x;
    x = y;
    y = temp;

}

// we used the reference operator & to pass the arguments by reference
// use it always when you want to modify the actual arguments
// instead of the copies of the arguments
