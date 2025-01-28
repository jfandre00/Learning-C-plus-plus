#include <iostream>

void happyBirthday(std::string name, int age);


int main() {

    std::string name = "Andre";
    int age = 44;

    happyBirthday(name, age);

    return 0;
}

void happyBirthday(std::string name, int age) {
    std::cout << "Happy Birthday to " << name << "\n";
    std::cout << "Happy Birthday to " << name << "\n";
    std::cout << "Happy Birthday dear " << name << "\n";
    std::cout << "Happy Birthday to " << name << "\n";
    std::cout << "You are now " << age << " years old!\n";

}