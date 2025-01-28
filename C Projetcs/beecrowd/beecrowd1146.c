#include <stdio.h>

int main() {

    do {
        int x;
        scanf("%d", &x);
        if (x == 0) {
            break;
        }
        for (int i = 1; i <= x; i++) {
            if (i == x) {
                printf("%d\n", i);
            } else {
                printf("%d ", i);
            }
        }
    } while (1);




    return 0;
}