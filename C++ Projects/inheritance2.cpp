#include <iostream>

class Shape{
    public:
        double area;
        double volume;
};

class Cube : public Shape {
    public:
        double side;
    Cube(double side) {
        this -> side = side;
        this -> area = 6 * side * side;
        this -> volume = side * side * side;
    }
};

class Sphere : public Shape {
    public:
        double radius;
    Sphere(double radius) {
        this -> radius = radius;
        this -> area = 4 * 3.14159 * (radius * radius);
        this -> volume = (4/3.0) * 3.14159 * (radius * radius * radius);
    }
};


int main() {

    Cube cube(10);

    std::cout << "Cube Area: " << cube.area << " cm^2\n";
    std::cout << "Cube Volume: " << cube.volume << " cm^3\n";

    Sphere sphere(5);

    std::cout << "Sphere Area: " << sphere.area << " cm^2\n";
    std::cout << "Sphere Volume: " << sphere.volume << " cm^3\n";

    return 0;
}