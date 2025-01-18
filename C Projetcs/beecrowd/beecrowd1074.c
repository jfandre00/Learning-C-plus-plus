#include <stdio.h>


int main() {

    int n, valor;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        scanf("%d", &valor);
        if(valor == 0) {
            printf("NULL\n");
        } else {
            if(valor % 2 == 0) {
                printf("EVEN ");
            } else {
                printf("ODD ");
            }
            if(valor > 0) {
                printf("POSITIVE\n");
            } else {
                printf("NEGATIVE\n");
            }
        }
    }

    



    return 0;
}