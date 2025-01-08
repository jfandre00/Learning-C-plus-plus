#include <stdio.h> // printf
#include <stdbool.h> // bool, true, false

int main() {
    char a = 'C';
    char b[] = "Andre";

    float c = 3.141592; // 4 bytes - 6 decimal places
    double d = 3.141592653589793238; // 8 bytes - 16 decimal places

    printf("char a = %c\n", a);
    printf("char b = %s\n", b);

    printf("float c = %f\n", c);
    printf("double d = %lf\n", d); // %lf is the format specifier for double

    bool e = true;

    printf("bool e = %d\n", e); // %d is the format specifier for int

    char f = 100; // 1 byte (-128 to 127) 

    printf("char f = %c\n", f); // %c is the format specifier for char - using ASCII
    printf("char f = %d\n", f); // %d is the format specifier for int

    unsigned char g = 200; // 1 byte (0 to 255) - disregards negative values

    printf("unsigned char g = %c\n", g); // %c is the format specifier for char - using ASCII
    printf("unsigned char g = %d\n", g); // %d is the format specifier for int

    short h = 30000; // 2 bytes (-32,768 to 32,767) %d
    unsigned short i = 60000; // 2 bytes (0 to 65,535) %d

    int j = 2000000000; // 4 bytes (-2,147,483,648 to 2,147,483,647) %d
    unsigned int k = 4000000000; // 4 bytes (0 to 4,294,967,295) %u

    printf("short h = %d\n", h);
    printf("unsigned short i = %d\n", i);

    printf("int j = %d\n", j);
    printf("unsigned int k = %u\n", k);

    long long l = 8000000000; // 8 bytes (-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807) %lld
    unsigned long long m = 16000000000255415U; // 8 bytes (0 to 18,446,744,073,709,551,615) %llu

    printf("long long l = %lld\n", l);
    printf("unsigned long long m = %llu\n", m);


    return 0;
}