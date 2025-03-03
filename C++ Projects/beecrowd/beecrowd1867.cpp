#include <iostream> // std::cin, std::cout
#include <string> // std::string, std::to_string, std::stoi

int main() {

    while (true) {

        int somaN = 0, somaM = 0;

        std::string n, m; // n and m are strings so we can use the size() method
        std::cin >> n >> m;
        if (n == "0" && m == "0") {
            break;
        }
        while (n.size() != 1) {
            somaN = 0;
            for (int i = 0; i < n.size(); i++) {
                somaN += n[i] - '0'; // convert char to int
            }
            n = std::to_string(somaN); // convert int to string
        }

        while (m.size() != 1) {
            somaM = 0;
            for (int i = 0; i < m.size(); i++) {
                somaM += m[i] - '0'; // convert char to int
            }
            m = std::to_string(somaM); // convert int to string
        }

        somaN = std::stoi(n); // convert string to int
        somaM = std::stoi(m); // convert string to int

        if (somaN > somaM) {
            std::cout << 1 << std::endl;
        } else if (somaM > somaN) {
            std::cout << 2 << std::endl;
        } else {
            std::cout << 0 << std::endl;
        }

    }

    return 0;
}

