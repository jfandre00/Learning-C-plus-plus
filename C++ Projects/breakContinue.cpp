#include <iostream>

int main() {

    // break = break out of loop
    // continue = skip the current iteration to the next iteration of the loop

    for(int i = 1; i <= 20; i++) {
        if (i == 13) {
            continue; // skip number 13. if I used break, it would stop the loop at 13
        }
        std::cout << i << "\n";

    }

    return 0;
}