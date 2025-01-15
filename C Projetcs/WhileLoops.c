#include <stdio.h>
#include <string.h>

int main() {

    // while loop = a structure that allows a block of code to be executed multiple times

    char name[25];

    printf("\nEnter your name: ");
    fgets(name, 25, stdin); 
    name[strlen(name) - 1] = '\0'; // remove the newline character from the end of the string

    while(strlen(name) == 0) {
        printf("\nYou must enter a name: ");
        printf("\nEnter your name: ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("\nHello, %s!\n", name);



    return 0;
}