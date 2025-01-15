#include <stdio.h>

int main() {

    int entradas;
    float mediaPonderada;

    scanf("%d", &entradas);

    for (int i = 0; i < entradas; i++) {
        float a, b, c;
        scanf("%f %f %f", &a, &b, &c);
        mediaPonderada = (a*2 + b*3 + c*5)/10;
        printf("%.1f\n", mediaPonderada);
    }


    return 0;
}