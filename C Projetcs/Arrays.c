#include <stdio.h>

int main() {

    // arrays = a collection of variables that are accessed with an index number
    // arrays have a fixed size

    //double prices[5] = {5.0, 10.0, 15.0, 25.0, 20.0};

    double prices[5]; 
    
    prices[0] = 5.0;
    prices[1] = 10.0;
    prices[2] = 15.0;
    prices[3] = 25.0;
    prices[4] = 20.0;

    printf("%.2lf", prices[2]);


    return 0;
}