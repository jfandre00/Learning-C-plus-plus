#include <iostream>


int main() {

    // foreach loop = loop that eases the traversal of a collection of elements

    std::string students[] = {"John", "Jane", "Sally", "Tom", "Jerry"};

    // you read: for every student in students

    for(std::string student : students) {
        std::cout << student << '\n';

    }

    int grades[] = {65, 72, 81, 93, 100};

    // you read: for every grade in grades

    for(int grade : grades) {
        std::cout << grade << '\n';
    }

    return 0;
}