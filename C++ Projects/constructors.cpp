#include <iostream>

class Student{
    public:
        std::string name;
        int age;
        double gpa;

    Student(std::string name, int age, double gpa){
        this -> name = name;
        this -> age = age;
        this -> gpa = gpa;
    }
};

class Car {
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

        Car(std::string x, std::string y, int z, std::string k){
            // this is not necessary because the attributes have the same name as the parameters
            make = x;
            model = y;
            year = z;
            color = k;
        }
};


int main() {

    // constructor = special method that is automatically called when an object of a class is
    // instantiated (created)
    // useful for assigning values to attributes of an object


    Student student1("Andre", 44, 3.5);
    Student student2("Denise", 38, 4.0);
    Student student3("Bento", 3, 4.0);

    std::cout << student1.name << '\n';
    std::cout << student1.age << '\n';
    std::cout << student1.gpa << '\n';

    Car car1("Chevrolet", "Camaro", 2021, "Red");
    Car car2("Ford", "Mustang", 2021, "Blue");

    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.year << '\n';
    std::cout << car1.color << '\n';

    return 0;
}