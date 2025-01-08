#include <stdio.h>

int main() {
    
    char operator;
    double num1;
    double num2;
    double result;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter number 1: ");
    scanf("%lf", &num1);

    printf("Enter number 2: ");
    scanf("%lf", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("The sum of %.2lf and %.2lf is %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("The difference of %.2lf and %.2lf is %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("The product of %.2lf and %.2lf is %.2lf\n", num1, num2, result);
            break;
        case '/':
            result = num1 / num2;
            if (num2 == 0) {
                printf("Cannot divide by zero\n");
                break;
            }
            printf("The quotient of %.2lf and %.2lf is %.2lf\n", num1, num2, result);
            break;
        default:
            printf("%c is not valid\n", operator);
    }


    return 0;   
}