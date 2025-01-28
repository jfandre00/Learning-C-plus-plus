#include <iostream>


int main() {

    // nested loops = a loop inside of a loop

    for(int i = 1; i <= 3; i++) {
        for(int j = 1; j <= 10; j++) 
        {
        std::cout << j << ' ';
        }
        std::cout << "\n";
    }
    
    int rows;
    int columns;
    char symbol;

    // draw a rectangle
    
    std::cout << "Enter number of rows: "; 
    std::cin >> rows;

    std::cout << "Enter number of columns: ";
    std::cin >> columns;

    std::cout << "Enter symbol to draw: ";
    std::cin >> symbol;

    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= columns; j++) {
            std::cout << symbol;
        }
        std::cout << "\n";
    }



    return 0;
}