#include <iostream>

class Animal {
    public:
        bool alive = true;
    void eat(){
        std::cout << "This animal eats food." << '\n';
    }
};

class Dog : public Animal { // inherit from Animal class
    public:
        bool alive = false; // this will override the alive attribute from the parent class
    void bark(){
        std::cout << "Woof! Woof!" << '\n';
    }
    
};

class Cat : public Animal { // inherit from Animal class
    public:

    void meow(){
        std::cout << "Meow! Meow!" << '\n';
    }
};


int main() {

    // inheritance = one class can receive attributes and methods from another class
    // children classes can have their own attributes and methods from a parent class
    // helps to reuse similar code and to create a more organized code


    Dog dog;

    std::cout << dog.alive << '\n';
    dog.eat();
    dog.bark();

    Cat cat;

    std::cout << cat.alive << '\n';
    cat.eat();
    cat.meow();


    return 0;
}