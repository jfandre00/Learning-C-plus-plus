#include <iostream>



int main() {

    // torre de hanoi

    int N;
    int teste = 1;

    while (true) {
        std::cin >> N;
        if (N == 0) {
            break;
        }

        int movimentos = 1;
        
        for (int i = 1; i < N; i++) {
            movimentos = movimentos * 2 + 1; 
        } // esse é o cálculo para a quantidade de movimentos necessários para resolver a torre de hanoi
          // ex: para 1 disco, 1 movimento; para 2 discos, 3 movimentos; para 3 discos, 7 movimentos; para 4 discos, 15 movimentos; e assim por diante
          
        std::cout << "Teste " << teste++ << std::endl;
        std::cout << movimentos << std::endl;
        std::cout << std::endl;
    }

    return 0;
}