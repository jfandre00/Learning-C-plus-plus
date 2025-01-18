#include <stdio.h>


int main() {

    int n;
    scanf("%d", &n);

    int x[n];
    int menor;
    int posicao;

    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
        if (i == 0) {
            menor = x[i];
            posicao = i;
        } else {
            if (x[i] < menor) {
                menor = x[i];
                posicao = i;
            }
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);


    return 0;
}