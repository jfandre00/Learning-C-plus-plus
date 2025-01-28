#include <iostream>

void walk(int steps);

int main() {

    // recursion = a programming technique where a function calls itself
    // break a complex concept into a repeatable single step process

    // (interactive vs recursive)

    // advantages = less code and is cleaner / useful for sorting and searching algorithms
    // disadvantages = can be slow and uses more memory

    walk(100);



    return 0;
}

void walk(int steps) {
    if(steps > 0) {
        std::cout << "You take a step!\n";
        walk(steps - 1);
    }
}