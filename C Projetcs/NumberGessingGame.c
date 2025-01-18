#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses = 0;
    int answer;

    // uses the current time as the seed for the random number generator
    srand(time(0));

    // generates a random number between MIN and MAX
    answer = (rand() % MAX) + MIN;

    // at least one guess is needed
    do {
        printf("Enter a guess: ");
        scanf("%d", &guess);
        if(guess > answer) {
            printf("Too high!\n");
        } else if(guess < answer) {
            printf("Too low!\n");
        } else {
            printf("Congratulations! You guessed the number\n");

        }
        guesses++;

    } while (guess != answer);

    printf("**********************\n");
    printf("answer: %d\n", answer);
    printf("guesses: %d\n", guesses);
    printf("**********************");


    return 0;
}