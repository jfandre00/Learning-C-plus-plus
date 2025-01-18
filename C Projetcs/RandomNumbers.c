#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // pseudo random numbers = A set of values or elements that are statistically random
    //                         (Don't use these for any sort of cryptography security)

    srand(time(0)); // seed the random number generator - using the current time

    int number1 = (rand() % 6) + 1; // generates a random number between 0 and 5 plus 1 
    // generates a random number between 0 and 32767 unless you use the modulus operator
    int number2 = (rand() % 6) + 1; 
    int number3 = (rand() % 6) + 1;

    printf("Random number: %d\n", number1);
    printf("Random number: %d\n", number2);
    printf("Random number: %d\n", number3);



    return 0;
}