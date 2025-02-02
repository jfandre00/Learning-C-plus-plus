#include <iostream>


int main() {

    int X[10];
    int entradas = 10;

    for (int i = 0; i < entradas; i++) {
        std::cin >> X[i];
        if (X[i] <= 0) {
            X[i] = 1;
        }
    }

    for (int i = 0; i < entradas; i++) {
        std::cout << "X[" << i << "] = " << X[i] << '\n';
    }



    return 0;
}