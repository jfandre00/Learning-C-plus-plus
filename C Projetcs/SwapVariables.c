#include <stdio.h>
#include <string.h>

int main() {

    char x = 'X';
    char y = 'Y';
    char temp;

    temp = x;
    x = y;
    y = temp;

    printf("x = %c\n", x);
    printf("y = %c\n", y);

    char a[15] = "water";
    char b[15] = "lemonade";
    char temp2[15];

    strcpy(temp2, a);
    strcpy(a, b);
    strcpy(b, temp2);

    printf("a = %s\n", a);
    printf("b = %s\n", b);

    




    return 0;
}