#include <stdio.h>

int main() {

    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0, 30.0};

    // sizeof(prices) = 6 * 8 bytes = 48 bytes
    // to find the length of the array, we divide the size of the array by the size of the first element

    for(int i=0; i < sizeof(prices)/sizeof(prices[0]); i++) 
    {
        printf("$%.2lf\n", prices[i]);
    }

    return 0;
}