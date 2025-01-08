#include <stdio.h>
#include <ctype.h> // string functions


int main() {

    char unit;
    float temp;

    printf("\nIs the temperature in Celsius or Fahrenheit? (C/F): ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if(unit == 'C') {
        printf("\nEnter the temperature in Celsius: ");
        scanf("%f", &temp);

        temp = (temp * 9/5) + 32;

        printf("The temperature in Fahrenheit is: %.1f\n", temp);

    } 
    else if (unit == 'F') {
        printf("\nEnter the temperature in Fahrenheit: ");
        scanf("%f", &temp);

        temp = ((temp - 32) * 5)/9;

        printf("The temperature in Celsius is: %.1f\n", temp);

    }
    else {
        printf("%c is not a valid unit of measurement\n", unit);
    }



    return 0;
}