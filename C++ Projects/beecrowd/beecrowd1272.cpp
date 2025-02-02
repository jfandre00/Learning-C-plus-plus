#include <iostream>

// primeiro ler o número de casos de teste
// ler uma string de tamanho n entre 1 e 50
// podem haver espaços no início e no final da string
// a mensagem oculta em um texto é composto pelas primeiras letras de cada palavra do texto, na ordem em que aparecem
// imprimir a mensagem oculta

int main() {

    int n;

    std::cin >> n;

    std::cin.ignore(); // ignorar o caractere de nova linha

    for(int i = 0; i < n; i++) {
        std::string s;
        std::getline(std::cin, s);

        bool flag = true;

        for(int j = 0; j < s.size(); j++) { // percorrer a string
            if(s[j] != ' ') {
                if(flag) { // se for a primeira letra da palavra
                    std::cout << s[j]; // imprimir a letra
                    flag = false; // mudar a flag para false
                }
            } else {
                flag = true;
            }
        }

        std::cout << std::endl;
    }



    return 0;
}