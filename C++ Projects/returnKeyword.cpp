#include <iostream>

//function declaration

double square(double length);
double cube(double length);
std::string concatStrings(std::string string1, std::string string2);


int main() {

    double length = 5.0;
    double area = square(length);
    double volume = cube(length);


    std::cout << "Area of square: " << area << " cm^2\n";
    std::cout << "Volume of cube: " << volume << " cm^3\n";

    std::string firstName = "Andre";
    std::string lastName = "Ferreira";
    std::string fullName = concatStrings(firstName, lastName);

    std::cout << "Full name: " << fullName << "\n";

    return 0;
}

double square(double length) {
    double result = length * length;

    return result;
}

double cube(double length) {
    double result = length * length * length;

    return result;
}

std::string concatStrings(std::string string1, std::string string2) {

    return string1 + " " + string2;
}