#include <stdio.h> // printf

int main() {

    // format specifiers = used to format the output of a program

    // %c = character
    // %s = string
    // %d = integer
    // %f = float
    // %lf = double

    // %.1 = decimal precision
    // %1 = minimum field width
    // %- = left align

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: $%-8.2f\n", item1); // 8 characters wide, 2 decimal places
    printf("Item 2: $%-8.2f\n", item2); // 8 characters wide, 2 decimal places
    printf("Item 3: $%-8.2f\n", item3); // 8 characters wide, 2 decimal places

    // constants = fixed values that do not change during the execution of a program

    const int MONTHS = 12;
    const float PI = 3.14159;
    // if you try to change the value of a constant, you will get an error

    printf("Months in a year: %d\n", MONTHS);
    printf("Value of PI: %.4f\n", PI);

    return 0;
}