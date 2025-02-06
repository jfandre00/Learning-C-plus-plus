#include <iostream>

int main() {

    while (true) {
        int N;
        int total = 0;
        int visitas = 0;

        std::cin >> N;
        if (N == -1) break;
        
        int precos[N];

        for (int i = 0; i < N; i++) {
            std::cin >> precos[i];
        }

        for (int i = 0; i < N; i++) {
            total += precos[i];
            if (total % 100 == 0) {
                visitas++;
                total = 0;
            }
        }

        std::cout << visitas << '\n';
    }



    return 0;
}