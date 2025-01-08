#include <iostream>

int main() {

    int x; //declaration
    x = 5; //assignment

    int y = 6;
    int sum = x + y;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

    int age = 21;
    int year = 2023;
    int days = 7;

    std::cout << "I am " << age << " years old." << '\n';

    // double (number including decimal point)

    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    std::cout << "The price is " << price << '\n';

    // char (single character)

    char grade = 'A';
    char initial = 'J';
    char currency = '$';

    std::cout << "My grade is " << grade << '\n';

    // boolean (true or false)

    bool student = true;
    bool passed = false;
    bool power = true;

    // string (objects that represent sequences of text)

    std::string name = "André";
    std::string day = "Monday";
    std::string address = "123 Fake Street"; 

    std::cout << "Hello " << name << '\n';
    std::cout << "Today is " << day << '\n';
    

    



    return 0;
}