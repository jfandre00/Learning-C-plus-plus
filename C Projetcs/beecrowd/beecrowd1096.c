#include <stdio.h>

int main() {

    int i = 1;
    int j[3] = {7, 6, 5};

    for (i = 1; i <= 9; i += 2) {
        for (int k = 0; k < 3; k++) {
            printf("I=%d J=%d\n", i, j[k]);
        }
    }



    return 0;
}