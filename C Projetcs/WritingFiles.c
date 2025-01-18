#include <stdio.h>

int main() {

    /*
    FILE *pF = fopen("test.txt", "a"); // use a for append, w for write

    // you can use a absolute path, like "C:\\Users\\User\\Desktop\\test.txt"
    // or a relative path, like "test.txt"
    

    fprintf(pF, "This is a test #2\n");

    fclose(pF);
    */

    if (remove("test.txt") == 0) {
        printf("File deleted successfully\n");
    } else {
        printf("Error deleting file\n");
    }
    return 0;
}