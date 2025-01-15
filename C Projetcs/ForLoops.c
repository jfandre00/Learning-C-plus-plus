#include <stdio.h>

int main() {

    // for loop = executes a block of code a limited amount of times

    for(int i = 1; i <= 10; i++) // could use i+=2 to skip numbers
    {
        printf("%d\n", i);
    }

    for(int i = 10; i >= 1; i--)
    {
        printf("%d\n", i);
    }   

    return 0;
}