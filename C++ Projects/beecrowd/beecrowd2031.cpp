// ataque vs pedra -> ataque vence - OK
// pedra vs papel -> pedra vence - OK
// papel vs ataque -> ataque vence - OK
// papel vs papel -> ambos vencem - OK
// pedra vs pedra -> não há ganhador
// ataque vs ataque -> ambos perdem

#include <iostream>

int main() {
    int N;
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::string jogador1, jogador2;
        std::cin >> jogador1 >> jogador2;
        if (jogador1 == "ataque" && jogador2 == "pedra" || jogador1 == "pedra" && jogador2 == "papel" || jogador1 == "ataque" && jogador2 == "papel") {
            std::cout << "Jogador 1 venceu\n";
        } else if (jogador1 == "pedra" && jogador2 == "ataque" || jogador1 == "papel" && jogador2 == "pedra" || jogador1 == "papel" && jogador2 == "ataque") {
            std::cout << "Jogador 2 venceu\n";
        } else if (jogador1 == "papel" && jogador2 == "papel") {
            std::cout << "Ambos venceram\n";
        } else if (jogador1 == "pedra" && jogador2 == "pedra") {
            std::cout << "Sem ganhador\n";
        } else if (jogador1 == "ataque" && jogador2 == "ataque") {
            std::cout << "Aniquilacao mutua\n";
        }

    }

    return 0;
}