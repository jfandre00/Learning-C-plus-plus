#include <stdio.h>

void hello(char name[], int age); // function prototype

int main() {

    // function prototypes

    // WHAT IS IT?
    // Function declaration, without a body, before main()
    // Ensures that calls to a fuction are made with the correct arguments

    char name[] = "John";
    int age = 27;

    hello(name, age);


    return 0;
}

void hello(char name[], int age) 
{
    printf("\n Hello %s", name);
    printf("\n You are %d years old", age);
}