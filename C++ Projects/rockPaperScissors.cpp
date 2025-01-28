#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main() {

    char player;
    char computer;

    player = getUserChoice();
    std::cout << "You chose: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "Computer chose: ";
    showChoice(computer);

    chooseWinner(player, computer);
    


    return 0;
}

char getUserChoice() {

    char player;
    std::cout << "Rock-Paper-Scissors Game\n";

    do {
        std::cout << "Choose one of the following\n";
        std::cout << "************************\n";
        std::cout << "Enter R for rock, P for paper, or S for scissors: ";
        std::cin >> player;

    } while(player != 'R' && player != 'P' && player != 'S' && player != 'r' && player != 'p' && player != 's');
    



    return player;

}
char getComputerChoice() {

    srand(time(0));
    int num = rand() % 3 + 1;

    switch(num) {
        case 1:
            return 'R';
        case 2:
            return 'P';
        case 3:
            return 'S';
    }

    return 0;

}
void showChoice(char choice) {

    switch(choice) {
        case 'R':
        case 'r':
            std::cout << "Rock\n";
            break;
        case 'P':
        case 'p':
            std::cout << "Paper\n";
            break;
        case 'S':
        case 's':
            std::cout << "Scissors\n";
            break;
    }

}
void chooseWinner(char player, char computer) {
    switch(player) {
        case 'R':
        case 'r':
            if(computer == 'R') {
                std::cout << "It's a tie!\n";
            } else if(computer == 'P') {
                std::cout << "Computer wins!\n";
            } else {
                std::cout << "You win!\n";
            }
            break;
        case 'P':
        case 'p':
            if(computer == 'P') {
                std::cout << "It's a tie!\n";
            } else if(computer == 'S') {
                std::cout << "Computer wins!\n";
            } else {
                std::cout << "You win!\n";
            }
            break;
        case 'S':
        case 's':
            if(computer == 'S') {
                std::cout << "It's a tie!\n";
            } else if(computer == 'R') {
                std::cout << "Computer wins!\n";
            } else {
                std::cout << "You win!\n";
            }
            break;
    }
}