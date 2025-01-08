#include <stdio.h>

double square(double x) 
{
    double result = x * x;

    return result; // we could have done return x * x;
}



int main() {

    double x = square(3.14);

    printf("%lf\n", x);

    return 0;
}