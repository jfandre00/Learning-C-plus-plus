#include <iostream>

using std::cin;

int main() {

    int C, N, M;

    cin >> C;

    for (int i = 0; i < C; i++) {
        cin >> N >> M;
        if (N%M == 0) {
            std::cout << N/M << "\n";
        } else {
            std::cout << N/M + 1 << "\n";
        }	
    }







    return 0;
}