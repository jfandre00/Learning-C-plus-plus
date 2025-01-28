#include <iostream>


int main() {

    std::string students[] = {"John", "Jane", "Sally", "Tom", "Jerry"};

    int arraySize = sizeof(students) / sizeof(students[0]);
    // you could also divide by the size of std::string (which is the element)

    for(int i=0; i < arraySize; i++) {
        std::cout << students[i] << '\n';

    }

    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    for(int i = 0; i < sizeof(grades) / sizeof(char); i++) {
        std::cout << grades[i] << '\n';
    }

    return 0;
}