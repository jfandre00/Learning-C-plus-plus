#include <iostream>
#include <iomanip>

int main() {
    double n1, n2, n3, n4, media, exame;

    std::cin >> n1 >> n2 >> n3 >> n4;
    std::cout << std::fixed << std::setprecision(1); // formatação de saída

    media = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / 10;
    std::cout << "Media: " << media << std::endl;
    if (media >= 7.0) {
        std::cout << "Aluno aprovado." << std::endl;
    } else if (media < 5.0) {
        std::cout << "Aluno reprovado." << std::endl;
    } else {
        std::cout << "Aluno em exame." << std::endl;
        std::cin >> exame; // nesse caso, a nota do exame é lida
        std::cout << "Nota do exame: " << exame << std::endl; // e exibida na tela com a formatação correta de 1 casa decimal
        media = (media + exame) / 2; // a média é recalculada
        if (media >= 5.0) {
            std::cout << "Aluno aprovado." << std::endl;
        } else {
            std::cout << "Aluno reprovado." << std::endl;
        }
        std::cout << "Media final: " << media << std::endl; // e a média final é exibida na tela com a formatação correta de 1 casa decimal
    }

    return 0;
}

