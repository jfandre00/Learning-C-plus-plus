#include <stdio.h>

int main() {

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    // possibilidades -> a > b > c 
    // a > c > b
    // b > a > c
    // b > c > a
    // c > a > b
    // c > b > a

    if (a > b && b > c) {
        printf("%d\n%d\n%d\n", c, b, a);
    }
    else if (a > c && c > b) {
        printf("%d\n%d\n%d\n", b, c, a);
    }
    else if (b > a && a > c) {
        printf("%d\n%d\n%d\n", c, a, b);
    }
    else if (b > c && c > a) {
        printf("%d\n%d\n%d\n", a, c, b);
    }
    else if (c > a && a > b) {
        printf("%d\n%d\n%d\n", b, a, c);
    }
    else {
        printf("%d\n%d\n%d\n", a, b, c);
    }

    printf("\n%d\n%d\n%d\n", a, b, c);


    return 0;
}