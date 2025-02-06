#include <iostream>

int main() {
    int N, I;
    
    while (std::cin >> N >> I) {  // Continua enquanto houver entrada válida (EOF)
        int contador = 0;
        for (int k = 0; k < N; k++) {
            int i, j;
            std::cin >> i >> j;
            
            if (i == I && j == 0) {
                contador++;
            }
        }
        std::cout << contador << std::endl;
    }

    return 0;
}
