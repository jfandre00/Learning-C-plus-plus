#include <stdio.h>


int main() {

    int entrada, alcool = 0, gasolina = 0, diesel = 0;
    
    while (1) {
        scanf("%d", &entrada);
        if(entrada == 1) {
            alcool++;
        } else if (entrada == 2) {
            gasolina++;
        } else if (entrada == 3) {
            diesel++;
        } else if (entrada == 4) {
            break;
        } else {
            continue;
        }
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);


    return 0;
}