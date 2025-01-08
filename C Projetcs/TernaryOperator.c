#include <stdio.h>

int findMax(int num1, int num2) {

    return (num1 > num2) ? num1 : num2;

}

int main() {

    // ternary operator = evaluates a condition and returns one value if the condition is true and a different value if the condition is false
    // (condition) ? true_value : false_value

    int max = findMax(3,4);

    printf("%d\n", max);


    return 0;
}