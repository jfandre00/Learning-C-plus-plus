#include <stdio.h>

void quadrados(int opcao) {
    for(int i = 2; i <= opcao; i+=2) {
        printf("%d^2 = %d\n", i, i * i);
    }
}   

int main() {

    int n;

    scanf("%d", &n);

    /*
    if(n % 2 == 0) {
        for(int i = 2; i <= n; i+=2) {
            printf("%d^2 = %d\n", i, i * i);
        }
    } else {
        for(int i = 2; i <= n - 1; i+=2) {
            printf("%d^2 = %d\n", i, i * i);
        }
    }
    */

    /*
    if (n % 2 == 0) {
        quadrados(n);
    } else {
        quadrados(n - 1);
    }
    */

    quadrados(n%2 == 0 ? n : n - 1);

    return 0;
}