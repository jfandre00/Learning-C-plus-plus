#include <stdio.h>

int main() {

    int x = 5;
    int y = 2;

    int z = x + y;

    int division = x / y; // 5 / 2 = 2 because both x and y are integers and the result is an integer

    float division2 = x / (float) y; // could also be written double division2 = (double) x / y;


    printf("x + y = %d\n", z);

    printf("x / y = %d\n", division);
    printf("x / y = %f\n", division2);


    int modulus = x % y; // 5 % 2 = 1

    x++; // x = x + 1

    printf("x++ = %d\n", x);

    // augmented assignment operators

    int a = 5;
    a += 2; // a = a + 2

    a -= 2; // a = a - 2

    a *= 2; // a = a * 2

    a /= 2; // a = a / 2

    a %= 2; // a = a % 2

    return 0;
}