#include <stdio.h>

int main() {

    // continue = skips the rest of the code inside a loop and jumps to the next iteration
    // break = exits the loop/switch statement

    for (int i = 1; i <= 20; i++) {
        if (i == 13) { // skip and don't print the number 13 and continue with the next iteration.
            continue;
        }
        printf("%d\n", i);
    }

    for (int i = 1; i <= 20; i++) {
        if (i == 13) { // break the loop when the number 13 is reached.
            break;
        }
        printf("%d\n", i);
    }


    return 0;
}