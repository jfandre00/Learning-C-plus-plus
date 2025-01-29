#include <iostream>


struct Car {
    std::string model;
    int year;
    std::string color;
    
};

void printCar(Car &car);
void paintCar(Car &car, std::string color);


int main() {

    Car car1;
    Car car2;

    car1.model = "Toyota";
    car1.year = 2020;
    car1.color = "Red";

    car2.model = "Ford";
    car2.year = 2019;
    car2.color = "Blue";

    paintCar(car1, "Green");
    
    std::cout << &car1 << '\n';
    printCar(car1);
    //printCar(car2);


    return 0;
}

void printCar(Car &car) { // if you need to modify the struct, pass by reference &
    std::cout << &car << '\n'; // memory address of the struct
    std::cout << "Model: " << car.model << '\n';
    std::cout << "Year: " << car.year << '\n';
    std::cout << "Color: " << car.color << '\n';
}

void paintCar(Car &car, std::string color) {
    car.color = color;
}