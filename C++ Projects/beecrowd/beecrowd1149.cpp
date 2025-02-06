#include <iostream>

int main() {

    int A, N; // A = valor inicial, N = quantidade de termos
    std::cin >> A >> N;

    while(N <= 0) { // Enquanto N for menor ou igual a 0
        std::cin >> N; // Leia N novamente
    }

    int soma = 0;

    for(int i=0; i < N; i++) { // Para i de 0 até N
        soma += A + i; // Soma recebe a soma de A + i
        // para A = 3 e N = 4, a soma será 3 + 4 + 5 + 6 = 18
        // para A = 3 e N = 1, a soma será 3
    }

    std::cout << soma << '\n';







    return 0;
}