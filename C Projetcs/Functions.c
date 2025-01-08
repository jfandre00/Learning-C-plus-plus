#include <stdio.h>

void birthday(char name[], int age) 
{
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday dear %s!", name);
    printf("\nYou are %d years old!", age);
}


int main() 
{
    char name[] = "Andre";
    int age = 44;

    birthday(name, age);

    return 0;
}