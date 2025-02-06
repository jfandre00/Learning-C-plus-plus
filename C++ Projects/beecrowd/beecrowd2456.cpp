#include <iostream>


int main() {

    int carta1, carta2, carta3, carta4, carta5;
    std::cin >> carta1 >> carta2 >> carta3 >> carta4 >> carta5;

    if(carta1 < carta2 && carta2 < carta3 && carta3 < carta4 && carta4 < carta5) {
        std::cout << "C\n";
    } else if(carta1 > carta2 && carta2 > carta3 && carta3 > carta4 && carta4 > carta5) {
        std::cout << "D\n";
    } else {
        std::cout << "N\n";
    }



    return 0;
}