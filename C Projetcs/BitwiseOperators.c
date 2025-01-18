#include <stdio.h>

int main() 
{
    // BITWISE OPERATORS = special operators used in bit level programming
    //                     (knowing binary is important for this topic)

    // & = bitwise AND
    // | = bitwise OR
    // ^ = bitwise XOR (exclusive OR)
    // << = bitwise left shift
    // >> = bitwise right shift

    int x =6; // 6 =     00000110 in binary
    int y = 12;  // 12 = 00001100 in binary
    int z = 0; // 0 =    00000000 in binary

    z = x & y; // 00000110 & 00001100 = 00000100 (4 in decimal)

    printf("AND z = %d\n", z);

    z = x | y; // 00000110 | 00001100 = 00001110 (14 in decimal)

    printf("OR z = %d\n", z);

    z = x ^ y; // 00000110 ^ 00001100 = 00001010 (10 in decimal) (both bits are different = 1)

    printf("XOR z = %d\n", z);

    z = x << 1; // 00000110 << 1 = 00001100 (12 in decimal) (move all bits to the left by 1)

    printf("Left shift z = %d\n", z);

    z = x << 2; // 00000110 << 2 = 00011000 (24 in decimal) (move all bits to the left by 2)

    printf("Left shift z = %d\n", z);

    z = y >> 1; // 00001100 >> 1 = 00000110 (6 in decimal) (move all bits to the right by 1)

    printf("Right shift z = %d\n", z);

    z = y >> 2; // 00001100 >> 2 = 00000011 (3 in decimal) (move all bits to the right by 2)

    printf("Right shift z = %d\n", z);





    return 0;
}