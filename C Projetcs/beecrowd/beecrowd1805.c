#include <stdio.h>

int main() {
    int A, B;

    // Lê os valores de A e B
    scanf("%d %d", &A, &B);

    // Calcula a soma direta usando a fórmula da PA
    long long soma = (long long)(B - A + 1) * (A + B) / 2;

    // Imprime o resultado
    printf("%lld\n", soma);

    return 0;
}