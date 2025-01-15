#include <stdio.h>

int main() {

    // do while loop = a structure that allows a block of code to be executed at least once, and then will repeat the loop as long as a condition is true

    int number = 0;
    int sum = 0;

    do
    {
        printf("Enter a number above 0: ");
        scanf("%d", &number);
        if(number > 0)
        {
            sum += number;
        }
    } while(number > 0);


    printf("The sum is %d\n", sum);
    return 0;
    
    }