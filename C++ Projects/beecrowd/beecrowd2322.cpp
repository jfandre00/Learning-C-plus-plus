#include <iostream>

int main() {

    int N; // O array deverá ir de 1 até N, mas está faltando um número. Precisamos descobrir qual é esse número
    int sum = 0;

    std::cin >> N;

    int* A = new int[N]; // Alocando memória para o array A de tamanho N

    for (int i = 1; i < N; i++) {
        std::cin >> A[i]; // Lendo os elementos do array A
        sum += A[i]; // Somando os elementos do array A ao mesmo tempo que são lidos
    }

    int somaCorreta = (N * (N + 1)) / 2; // Soma dos N primeiros números naturais (fórmula)

    int resultado = somaCorreta - sum;

    std::cout << resultado << '\n';












    return 0;
}