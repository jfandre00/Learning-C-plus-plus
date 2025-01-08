#include <stdio.h>

int main() {
    
    int x; //declaration
    x = 10; //initialization
    int y = 20; //declaration and initialization

    int age = 30; //integer
    float gpa = 2.05; //floating point number
    double pi = 3.14159; //double precision floating point number
    char grade = 'A'; //single character

    // C is not a object oriented language, so it doesn't have a string data type
    // but you can use an array of characters to store a string

    char name[] = "John"; //string of characters

    printf("Your are %d years old\n", age);
    printf("Your name is %s\n", name);
    printf("Your GPA is %f\n", gpa);
    printf("The value of pi is %.2f\n", pi); //%.2f limits the number of decimal places to 2
    printf("Your grade is %c\n", grade);





    return 0;
}