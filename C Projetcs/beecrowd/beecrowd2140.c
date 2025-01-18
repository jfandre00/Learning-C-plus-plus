#include <stdio.h>

int main() {

    int n, m;

    do 
    {
        scanf("%d %d", &n, &m);
        if (n == 0 && m == 0) {
            break;
        }

        int contadorNotas = 0;
        int troco = m - n;

        while (troco > 0) {
            if (troco >= 100) {
                troco -= 100;
                contadorNotas++;
            } else if (troco >= 50) {
                troco -= 50;
                contadorNotas++;
            } else if (troco >= 20) {
                troco -= 20;
                contadorNotas++;
            } else if (troco >= 10) {
                troco -= 10;
                contadorNotas++;
            } else if (troco >= 5) {
                troco -= 5;
                contadorNotas++;
            } else if (troco >= 2) {
                troco -= 2;
                contadorNotas++;
            } else if (troco >= 1) {
                troco -= 1;
                contadorNotas++;
            } else {
                break;
            }
        }

        if(contadorNotas == 2) {
            printf("possible\n");
        } else {
            printf("impossible\n");
        }
    } while (n != 0 && m != 0);

    return 0;
}