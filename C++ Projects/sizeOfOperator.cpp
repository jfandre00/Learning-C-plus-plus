#include <iostream>

int main() {

    // sizeof() operator returns the size of a variable in bytes.


    double gpa = 2.5;
    std::string name = "John is a nice guy";
    char letter = 'A';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    std::cout << sizeof(gpa) << '\n'; // Output: 8
    std::cout << sizeof(name) << '\n'; // Output: 32
    std::cout << sizeof(letter) << '\n'; // Output: 1
    std::cout << sizeof(student) << '\n'; // Output: 1
    std::cout << sizeof(grades) << '\n'; // Output: 5

    // we can use the size of operator to get the number of elements in an array

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int size = sizeof(numbers) / sizeof(numbers[0]);

    std::cout << size << '\n'; // Output: 9

    std::string students[] = {"John", "Jane", "Doe"};

    int size2 = sizeof(students) / sizeof(students[0]);

    std::cout << size2 << '\n'; // Output: 3

    return 0;
}