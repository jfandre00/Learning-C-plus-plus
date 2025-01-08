#include <stdio.h>
#include <stdbool.h>

int main() {

    float temp = 25;
    bool sunny = false;

    if(temp >= 0 && temp <= 30 && sunny == true) {
        printf("The weather is good\n");
    }
    else {
        printf("The weather is bad\n");
    }

    float temperatura = 25;

    if(temperatura <= 0 || temperatura >= 30) {
        printf("The weather is bad\n");
    }
    else {
        printf("The weather is good\n");
    }


    bool sunny2 = true;

    if(!sunny2) { // if it is NOT sunny
        printf("It's cloudy outside\n");
    }
    else {
        printf("It's sunny outside\n");
    }


    return 0;
}