#include <stdio.h>
#include <string.h>

//typedef char user[25]; // if I need an array of 25 characters, I can use user instead of char[25]

typedef struct
{
    char name[25];
    char password[12];
    int id;
} User;



int main() {

    // typedef = alias for data types

    //char user1[25] = "Andre";
    //user user1 = "Andre";

    User user1 = {"Andre", "password1234", 12345};
    User user2 = {"John", "password4321", 54321};

    printf("%s has a password of %s and an id of %d\n", user1.name, user1.password, user1.id);
    printf("%s has a password of %s and an id of %d\n", user2.name, user2.password, user2.id);

    return 0;
}