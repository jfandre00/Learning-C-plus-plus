#include <iostream>

int main() {

    double X, Y;

    std::cin >> X >> Y;

    if(X > 0 && Y > 0) {
        std::cout << "Q1\n";
    } else if(X < 0 && Y > 0) {
        std::cout << "Q2\n";
    } else if(X < 0 && Y < 0) {
        std::cout << "Q3\n";
    } else if(X > 0 && Y < 0) {
        std::cout << "Q4\n";
    } else if(X == 0 && Y == 0) {
        std::cout << "Origem\n";
    } else if(X == 0 && Y != 0) { // ponto está no eixo Y
        std::cout << "Eixo Y\n";
    } else if(X != 0 && Y == 0) { // ponto está no eixo X
        std::cout << "Eixo X\n";
    }

    return 0;
}
