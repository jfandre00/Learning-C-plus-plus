#include <iostream>

int factorial(int num);

int main() {

    std::cout << factorial(10);

    return 0;
}

/*
int factorial(int num) {
    int result = 1;
    for(int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}
*/

// recursive factorial

int factorial(int num) {
    if(num == 0) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}