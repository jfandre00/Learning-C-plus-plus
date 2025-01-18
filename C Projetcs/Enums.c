#include <stdio.h>

enum Day {Sunday = 1 , Monday = 2, Tuesday = 3, Wednesday = 4, Thursday = 5, Friday = 6, Saturday = 7};

int main () {

    // enum = a user defined type of named integer identifiers
    //        helps to make a program more readable


    enum Day today = Sunday;

    printf("Day %d\n", today); // it is treated as an integer

    if( today == Sunday || today == Saturday) {
        printf("It's the weekend\n");
    } else {
        printf("It's a weekday\n");

    }

    return 0;
}