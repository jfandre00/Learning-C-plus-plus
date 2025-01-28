#include <iostream>
#include <iomanip>

int main() {

    double n;
    int notas[6] = {100, 50, 20, 10, 5, 2};
    int moedas[6] = {100, 50, 25, 10, 5, 1};
    int qtdNotas[6] = {0, 0, 0, 0, 0, 0};
    int qtdMoedas[6] = {0, 0, 0, 0, 0, 0};

    std::cin >> n;

    std::cout << "NOTAS:" << '\n';
    for(int i = 0; i < 6; i++) {
        qtdNotas[i] = n / notas[i];
        n -= qtdNotas[i] * notas[i];
        std::cout << qtdNotas[i] << " nota(s) de R$ " << notas[i] << ".00" << '\n';
    }

    std::cout << "MOEDAS:" << '\n';
    n *= 100;
    for(int i = 0; i < 6; i++) {
        qtdMoedas[i] = n / moedas[i];
        n -= qtdMoedas[i] * moedas[i];
        std::cout << qtdMoedas[i] << " moeda(s) de R$ " << std::fixed << std::setprecision(2) << moedas[i] / 100.0 << '\n';
    }





    return 0;
}