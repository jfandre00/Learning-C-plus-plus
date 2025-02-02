#include <iostream>
#include <iomanip>

int main() {

    double salario, imposto = 0;

    std::cin >> salario;

    if(salario <= 2000) {
        std::cout << "Isento\n";
    } else if(salario <= 3000) {
        imposto = (salario - 2000) * 0.08;
    } else if(salario <= 4500) {
        imposto = (salario - 3000) * 0.18 + (1000 * 0.08);
    } else {
        imposto = (salario - 4500) * 0.28 + (1500 * 0.18) + (1000 * 0.08);
    }
    
    if(imposto > 0) {
        std::cout << "R$ " << std::fixed << std::setprecision(2) << imposto << std::endl;
    } 

    return 0;
}