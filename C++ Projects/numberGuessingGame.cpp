#include <iostream>
#include <ctime>

int main() {

    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = rand() % 100 + 1; // random number between 1 and 100

    std::cout << "****** NUMBER GUESSING GAME ******\n";

    do {
        std::cout << "Enter your guess between (1-100): ";
        std::cin >> guess;
        tries++;

        if(guess > num) {
            std::cout << "Too high!\n";
        }
        else if(guess < num) {
            std::cout << "Too low!\n";
        }
        else {
            std::cout << "Congratulations! You guessed the number in " << tries << " tries.\n";
        }

    } while (guess != num);

    return 0;
}