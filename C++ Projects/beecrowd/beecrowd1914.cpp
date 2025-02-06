#include <iostream>

using std::string; 

int main() {

    int qt;
    int n, m;
    std::cin >> qt;

    for(int i=0; i < qt; i++) {
        
        string j1, j2, escolha1, escolha2;

        std::cin >> j1 >> escolha1 >> j2 >> escolha2;
        std::cin >> n >> m;

        if((n+m) % 2 == 0 && escolha1 == "PAR") { 
            std::cout << j1 << '\n';
        } else if((n+m) % 2 == 0 && escolha2 == "PAR") {
            std::cout << j2 << '\n';
        } else if((n+m) % 2 != 0 && escolha1 == "IMPAR") {
            std::cout << j1 << '\n';
        } else if((n+m) % 2 != 0 && escolha2 == "IMPAR") {
            std::cout << j2 << '\n';
            
        }
        


    }



    return 0;
}