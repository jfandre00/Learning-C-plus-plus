#include <stdio.h>
#include <string.h>

int main() {

    char string1[] = "Bro";
    char string2[] = "Code";

    //strlwr() = converts string to lowercase
    //strupr() = converts string to uppercase
    //srtcat() = concatenates(joins) two strings
    //strncat(string1, string2, n) = concatenates(joins) first n characters of two strings
    //strcpy() = copies one string to another
    //strncpy() = copies first n characters of one string to another

    strlwr(string1);

    printf("%s\n", string1);

    strupr(string1);

    printf("%s\n", string1);

    strcat(string1, string2);

    printf("%s\n", string1);

    strncat(string1, string2, 1);

    printf("%s\n", string1);

    strcpy(string1, string2); //string1 = string2

    printf("%s\n", string1);

    strncpy(string1, string2, 2); //string1 = first 3 characters of string2

    printf("%s\n", string1);

    char string3[] = "Andre";
    char string4[] = "Ferreira";

    //srtset() = sets first n characters of a string to a specific character
    strset(string3, 'r');

    printf("%s\n", string3);
    //strnset() = sets first n characters of a string to a specific character
    strnset(string4, '?', 3);

    printf("%s\n", string4);

    //strrev() = reverses a string

    char string5[] = "Hello";
    char string6[] = "olleHddess";

    strrev(string5);
    printf("%s\n", string5);

    int result = strlen(string1);  //returns the length of the string
    int result2 = strcmp(string3, string5); //returns 0 if two strings are equal

    if (result2 == 0) {
        printf("The strings are equal\n");
    } else {
        printf("The strings are not equal\n");
    }

    result2 = strncmp(string6, string5, 3); //returns 0 if the first n characters of two strings are equal

    if (result2 == 0) {
        printf("The strings are equal\n");
    } else {
        printf("The strings are not equal\n");
    }

    int result3 = strnicmp(string6, string5, 3); //returns 0 if the first n characters of two strings are equal (case insensitive)

    int result4 = strcmpi(string6, string5); //returns 0 if two strings are equal (case insensitive)




    return 0;
}