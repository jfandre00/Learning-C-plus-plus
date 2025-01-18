#include <stdio.h>
#include <string.h>


// Função que verifica se a string B corresponde aos últimos dígitos da string A
void verifica_encaixe() {
    int n;

    // Lê a quantidade de casos de teste
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char a[1001], b[1001];

        // Lê os valores A e B
        scanf("%s %s", a, b);

        // Comprimento das strings A e B
        int len_a = strlen(a);
        int len_b = strlen(b);

        // Verifica se B corresponde aos últimos dígitos de A
        if (len_b <= len_a && strcmp(a + len_a - len_b, b) == 0) 
        // strcmp compara as strings, se forem iguais retorna 0. O ponteiro a + len_a - len_b aponta para o início da string A onde a string B deve ser comparada. Por exemplo se A = 123456 e B = 56, o ponteiro a + len_a - len_b (a + 6 - 2 = a[4]) apontará para o índice 4 de A, onde começa a string 56.
        {
            printf("encaixa\n");
        } else {
            printf("nao encaixa\n");
        }
    }
}


// código principal
int main() {
    verifica_encaixe();
    return 0;
}