#include <stdio.h>

int main() {

    int n, qte, total;
    char tipo;

    int totalC = 0; 
    int totalR = 0; 
    int totalS = 0;

    float percentC, percentR, percentS;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {

        scanf("%d %c", &qte, &tipo);

        if(tipo == 'C') {
            totalC += qte;
        } else if(tipo == 'R') {
            totalR += qte;
        } else if(tipo == 'S') {
            totalS += qte;
        }

    }

    total = totalC + totalR + totalS;

    percentC = (totalC * 100.0) / total;
    percentR = (totalR * 100.0) / total;
    percentS = (totalS * 100.0) / total;


    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", totalC);
    printf("Total de ratos: %d\n", totalR);
    printf("Total de sapos: %d\n", totalS);
    printf("Percentual de coelhos: %.2f %%\n", percentC); // precisa de %% para imprimir %
    printf("Percentual de ratos: %.2f %%\n", percentR);
    printf("Percentual de sapos: %.2f %%\n", percentS);

      
    return 0;
}