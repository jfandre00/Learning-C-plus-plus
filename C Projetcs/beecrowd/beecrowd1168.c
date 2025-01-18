#include <stdio.h>

int main() {

    int leds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    
    int n;

    scanf("%d", &n);

    while (n--) {
        char number[1001]; // 1001 is the maximum number of digits
        int i = 0;
        int total = 0;
        scanf("%s", number);
        while (number[i] != '\0') { // '\0' is the null character
            total += leds[number[i] - '0']; // '0' is the ASCII value of the character '0'
            i++;
        }
        printf("%d leds\n", total);
    }

    


    return 0;
}