#include <iostream>

int main() {
    int A, B, C;
    std::cin >> A >> B >> C;

    int auxA = A / 2;
    int auxB = B / 3;
    int auxC = C / 5;

    int min_bolos = auxA; // Começa assumindo que auxA é o menor

    if (auxB < min_bolos) {
        min_bolos = auxB;
    }
    if (auxC < min_bolos) {
        min_bolos = auxC;
    }

    std::cout << min_bolos << std::endl;

    return 0;
}