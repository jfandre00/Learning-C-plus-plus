#include <stdio.h>


int main() {

    int n[20], m[20], i, j, temp;

    for (i = 0; i < 20; i++) {
        scanf("%d", &n[i]);
    }

    for (i = 0, j = 19; i < 20; i++, j--) {
        m[j] = n[i];
    }
     

    for (i = 0; i < 20; i++) {
        printf("N[%d] = %d\n", i, m[i]);
    }    


    return 0;
}