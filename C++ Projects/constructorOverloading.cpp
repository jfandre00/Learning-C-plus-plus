#include <iostream>

class Pizza {
    public:
        std::string topping1;
        std::string topping2;

    Pizza() {
    }
    Pizza(std::string topping1) {
        this -> topping1 = topping1;
    } 
    Pizza(std::string topping1, std::string topping2) {
        this -> topping1 = topping1;
        this -> topping2 = topping2;
    } 
};


int main() {

    // overload constructor = multiple constructors with same name but different parameters

    Pizza pizza1("Pepperoni");
    Pizza pizza2("Mushroom", "Onion");
    Pizza pizza3; // no toppings

    std::cout << pizza1.topping1 << std::endl;
    std::cout << pizza2.topping1 << " and " << pizza2.topping2 << std::endl;


    return 0;
}