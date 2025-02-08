#include <iostream>
#include <iomanip>

int main() {
    float V;
    int N;

    while (std::cin >> V >> N) {
        float resultado = V / N;
        std::cout << std::fixed << std::setprecision(2) << resultado << std::endl;
    }

    return 0;
}
