#include <stdio.h>

void printAge(int *pAge) {
    printf("You are %d years old\n", *pAge); // dereference the pointer to get the value at the address
}


int main() {

    // pointer = a "variable-like" reference that holds a memory address to another variable, array, etc.
    //           some tasks are easier to perform with pointers (less memory overhead, faster, etc.)
    //           * = indirection operator (value at address)


    int age = 21;
    int *pAge = NULL; // good practice to initialize pointers to NULL
    pAge = &age; // & = address of

    printf("address of age: %p\n", &age); // %p = pointer address
    printf("address of pAge: %p\n", &pAge);
    printf("value at pAge: %d\n", *pAge); // * = value at address
    printf("value of age: %d\n", age);

    printf("size of age: %d bytes\n", sizeof(age)); // size of int = 4 bytes
    printf("size of pAge: %d bytes\n", sizeof(pAge)); // size of pointer = 8 bytes

    //printAge(age);
    //you can also pass the pointer
    printAge(pAge);

    return 0;
}