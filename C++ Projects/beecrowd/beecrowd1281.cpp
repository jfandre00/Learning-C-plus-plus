#include <iostream>

int main() {

    int N, M, P;

    //primeira leitura - número de casos
    std::cin >> N;

    for (int i = 0; i < N; i++) {

        std::cin >> M;
        std::string produtos[M];
        double precos[M];
        for (int i = 0; i < M; i++) {
            std::cin >> produtos[i] >> precos[i];
        }

        std::cin >> P;
        std::string pedidos[P];
        int quantidade[P];
        for (int i = 0; i < P; i++) {
            std::cin >> pedidos[i] >> quantidade[i];
        }

        double total = 0;
        
        for (int i = 0; i < P; i++) {
            for (int j = 0; j < M; j++) {
                if (pedidos[i] == produtos[j]) {
                    total += quantidade[i] * precos[j];
                }
            }
        }

        std::cout.precision(2);
        std::cout << "R$ " << std::fixed << total << '\n';
    }


    
    



    return 0;
}