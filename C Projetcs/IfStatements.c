#include <stdio.h>

int main() {

    int age;

    printf("\nWhat is your age? ");
    scanf("%d", &age);

    if(age >= 18) {
        printf("You are now signed up");
    }
    else if(age == 0) {
        printf("You were just born");
    }
    else if(age < 0) {
        printf("You haven't been born yet");
    }
    else {
        printf("You are not old enough to sign up");
    }


    return 0;
}