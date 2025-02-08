#include <iostream>

using std::string;

int main() {

    string N; // tratar como string para podermos acessar os elementos individualmente
    bool achou = false;

    std::cin >> N; 

    long tamanho = N.size(); // a entrada pode ser até do tamanho 10^17, por isso precisamos de um tipo de dado que suporte isso

    for(int i =0; i < tamanho; i++){
        if(N[i] == '1') { // se o caractere atual for 1, verificamos se o próximo é 3
            if(N[i+1] == '3') { // se o próximo caractere for 3, verificamos se o próximo é 1
                achou = true;
                break; // como encontramos 13, não precisamos continuar verificando
            }
        }

    }

    if (achou) {
        std::cout << N << " es de Mala Suerte\n";
    } else {
        std::cout << N << " NO es de Mala Suerte\n";
    }

    return 0;
}