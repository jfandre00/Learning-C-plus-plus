#include <iostream>

int main() {

    std::string questions[] = {"1. What year was C++ created?: ",
                               "2. Who invented C++?: ",
                               "3. What is the predecessor of C++?: ",
                               "4. What is the successor of C++?: "};

    std::string options[][4] = {{"A. 1979", "B. 1980", "C. 1985", "D. 1990"},
                                {"A. Bjarne Stroustrup", "B. Dennis Ritchie", "C. James Gosling", "D. Guido van Rossum"},
                                {"A. C", "B. Java", "C. Python", "D. Ruby"},
                                {"A. C#", "B. Java", "C. Python", "D. Ruby"}};

    char answerKey[] = {'C', 'A', 'A', 'B'};

    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score = 0;

    for (int i = 0; i < size; i++) {
        std::cout << "*****************************\n";
        std::cout << questions[i] << '\n';
        std::cout << "*****************************\n";

        for(int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++) {
            std::cout << options[i][j] << '\n';
        }

        std::cin >> guess;
        guess = toupper(guess);

        if (guess == answerKey[i]) {
            std::cout << "Correct!\n";
            score++;
        } else {
            std::cout << "Incorrect!\n";
            std::cout << "The correct answer is: " << answerKey[i] << '\n';
        }

    }

    std::cout << "*****************************\n";
    std::cout << "Your score is: " << score << "/" << size << '\n'; 
    std::cout << "SCORE: " << (score / (double)size) * 100 << "%" << '\n';


    return 0;
}