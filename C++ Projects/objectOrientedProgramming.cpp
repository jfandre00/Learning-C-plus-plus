#include <iostream>

class Human{
    public:
        std::string name; // you can assign a default value here
        std::string occupation;
        int age;

        void eat() {
            std::cout << name << " is eating.\n";
        }
        void drink() {
            std::cout << name << " is drinking.\n";
        }
        void sleep() {
            std::cout << name << " is sleeping.\n";
        }
};

class Car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

        void accelerate() {
            std::cout << make << " " << model << " is accelerating.\n";
        }
        void brake() {
            std::cout << make << " " << model << " is braking.\n";
        }
};

int main() {

    // object = collection of attributes (variables) and methods (functions)
    // they can have characteristics (attributes) and can do things (methods)
    // can be used to mimic real-world objects (ex: car, dog, book, phone, etc.)
    // created from a class which is a blueprint for an object

    Human human1;
    Human human2;

    human1.name = "Andre";
    human1.occupation = "Software Developer";
    human1.age = 44;

    human2.name = "Maria";
    human2.occupation = "Doctor";
    human2.age = 32;

    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';

    std::cout << human2.name << '\n';
    std::cout << human2.occupation << '\n';
    std::cout << human2.age << '\n';

    human1.eat();
    human1.drink();
    human1.sleep();

    human2.eat();
    human2.drink();
    human2.sleep();

    Car car1;

    car1.make = "Toyota";
    car1.model = "Corolla";
    car1.year = 2020;
    car1.color = "Red";

    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.year << '\n';
    std::cout << car1.color << '\n';

    car1.accelerate();
    car1.brake();


    return 0;
}