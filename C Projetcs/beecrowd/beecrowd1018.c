#include <stdio.h>

// Função para imprimir as notas
void print_notes(int *amount, int note_value) {
    int cedulas = *amount / note_value;
    printf("%d nota(s) de R$ %d,00\n", cedulas, note_value);
    *amount = *amount % note_value;
}

int main() {
    int amount;

    // Lê o valor inteiro
    scanf("%d", &amount);

    // Imprime o valor lido
    printf("%d\n", amount);

    // Chama a função para cada valor de nota
    print_notes(&amount, 100);
    print_notes(&amount, 50);
    print_notes(&amount, 20);
    print_notes(&amount, 10);
    print_notes(&amount, 5);
    print_notes(&amount, 2);
    print_notes(&amount, 1);

    return 0;
}