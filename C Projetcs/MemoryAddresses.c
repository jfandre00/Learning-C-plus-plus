#include <stdio.h>

int main() {

    // memory = an array of bytes within RAM (street)
    // memory block = a single unit (byte) within memory, used to hold some value (person)
    // memory address = the address of where a memory block is located (house address)

    char a = 'X'; // a char is 1 byte
    short b = 'Y'; // a short is 2 bytes
    int c = 'Z'; // an int is 4 bytes
    double d = 'Y'; // a double is 8 bytes

    printf("%d bytes", sizeof(a));
    printf("\n");
    printf("%d bytes", sizeof(b));
    printf("\n");
    printf("%d bytes", sizeof(c));
    printf("\n");
    printf("%d bytes", sizeof(d));
    printf("\n");

    printf("Memory address of a: %p\n", &a); // %p is the format specifier for memory addresses
    printf("Memory address of b: %p\n", &b);
    printf("Memory address of c: %p\n", &c);
    printf("Memory address of d: %p\n", &d);
    // the address is written in hexadecimal format

    char x;
    char y[2]; // an array of 2 chars has a size of 2 bytes
    short z[2]; // an array of 2 shorts has a size of 4 bytes
    int w[2]; // an array of 2 ints has a size of 8 bytes
    double v[2]; // an array of 2 doubles has a size of 16 bytes

    printf("sizeof(x) = %d\n", sizeof(x));
    printf("sizeof(y) = %d\n", sizeof(y));

    printf("Memory address of x: %p\n", &x);
    printf("Memory address of y: %p\n", &y);


    return 0;
}