#include <iostream>

int main() {

    int N[10], V;
    std::cin >> V;

    for (int i = 0; i < 10; i++) {
        N[i] = V;
        V *= 2;
    }

    for (int i = 0; i < 10; i++) {
        std::cout << "N[" << i << "] = " << N[i] << '\n';
    }



    return 0;
}