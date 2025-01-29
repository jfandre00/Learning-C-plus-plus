#include <iostream>

int main() {

    int n;
    double a, b, c, media;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> a >> b >> c;
        media = (a * 2 + b * 3 + c * 5) / 10;
        std::cout.precision(1); // Sets the precision of the output
        std::cout << std::fixed << media << '\n'; // Sets the output to fixed point notation
    }


    return 0;
}