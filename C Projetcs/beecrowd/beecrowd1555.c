#include <stdio.h>

int main() {
    int linhas;
    int x, y;
    int rafael, beto, carlos;

    scanf("%d", &linhas);

    for (int i = 1; i <= linhas; i++) {
        scanf("%d %d", &x, &y);

        rafael = (9 * x * x) + (y * y);
        beto = (2 * x * x) + (25 * y * y);
        carlos = (-100 * x) + (y * y * y);

        if (rafael > beto && rafael > carlos) {
            printf("Rafael ganhou\n");
        } else if (beto > rafael && beto > carlos) {
            printf("Beto ganhou\n");
        } else {
            printf("Carlos ganhou\n");
        }
    }

    return 0;
}