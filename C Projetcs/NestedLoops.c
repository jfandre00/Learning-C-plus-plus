#include <stdio.h>

int main() {

    // nested loops = a loop inside of another loop

    int rows;
    int columns;
    char symbol;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);
    printf("Enter the symbol to use: ");
    scanf(" %c", &symbol);

    for (int i = 1; i <= rows; i++) 
        {
        for(int j = 1; j <= columns; j++) 
            {
            printf("%c", symbol);
            }
        printf("\n");
        }

    return 0;
    }

