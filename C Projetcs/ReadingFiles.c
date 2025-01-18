#include <stdio.h>

int main() {

    FILE *pF = fopen("C:\\Users\\jfand\\Downloads\\poem.txt", "r");

    // we are going to need a buffer to store the data we read from the file

    char buffer[255];

    // file detection

    if(pF == NULL) {
        printf("File not found\n");
    }
    else {
        while(fgets(buffer, 255, pF) != NULL) 
        {
        printf("%s", buffer);
        }
    }

   

    fclose(pF);
    return 0;
}