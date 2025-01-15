#include <stdio.h>

int main() {

    float soma = 0;
    float somador;

    for (int s = 1; s <= 100; s++) {
        somador = 1.0/s; // 1.0 is a float number, so the result will be a float number. It's a way to guarantee that the result will be a float number. 
        soma = soma + somador;
    }

    printf("%.2f\n", soma);



    return 0;
}