#include <iostream>

struct student {
    std::string name;
    double gpa;
    bool enrolled; // you can pre initialize the members of a struct = true/false, 0/1, etc.
};

int main() {

    // struct = A structure that group related variables under one name
    // can contain many data types
    // variables inside a struct are called members
    // members can be accessed using the member access operator (.)


    student student1;
    student1.name = "John";
    student1.gpa = 3.2;
    student1.enrolled = true;

    student student2;
    student2.name = "Jane";
    student2.gpa = 3.8;
    student2.enrolled = true;

    student student3;
    student3.name = "Doe";
    student3.gpa = 2.5;
    student3.enrolled = false;
    
    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';

    std::cout << student2.name << '\n';
    std::cout << student2.gpa << '\n';
    std::cout << student2.enrolled << '\n';

    std::cout << student3.name << '\n';
    std::cout << student3.gpa << '\n';
    std::cout << student3.enrolled << '\n';


    return 0;
}