#include <stdio.h>
#include <string.h>

int main() {

    char name[25]; // array of characters (bytes)
    int age;

    printf("What is your name? ");
    //scanf("%s", name); 
    fgets(name, 25, stdin); // safer way to get user input
    name[strlen(name) - 1] = '\0'; // remove the newline character from the input

    printf("How old are you? ");
    scanf("%d", &age);

    printf("Your name is %s and you are %d years old.\n", name, age);

    return 0;
}