#include <stdio.h>
#include <ctype.h>

int main() 
{
    char questions[][100] = {"1. What year did the C language debut?: ",
                             "2. What is the name of the creator of the C language?: ",
                             "3. What is the predecessor of C?: ",
                             };
    
    char options[][100] = {"A. 1969", "B. 1972", "C. 1978",
                           "A. Dennis Ritchie", "B. Ken Thompson", "C. Bjarne Stroustrup",
                           "A. C#", "B. B", "C. C++",
                           };
    
    char answers[] = {'B', 'A', 'B'};

    int numberOfQuestions = sizeof(questions) / sizeof(questions[0]);

    char guess;
    int score = 0;

    printf("QUIZ GAME\n");

    for(int i = 0; i < numberOfQuestions; i++) {

        printf("************************\n");
        printf("%s\n", questions[i]);
        printf("************************\n");

        //after the question is printed, print the options
        //we will need a nested loop to print the options

        for(int j = (i * 3); j < (i * 3) + 3; j++) {
            printf("%s\n", options[j]);
        }

        printf("Enter your answer: ");
        scanf(" %c", &guess);
        scanf("%*[^\n]"); //clear the input buffer

        guess = toupper(guess);

        if(guess == answers[i]) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Incorrect!\n");
        }
       
    }

    printf("************************\n");
    printf("Your score is: %d/%d\n", score, numberOfQuestions);
    printf("************************\n");
    
    return 0;
}