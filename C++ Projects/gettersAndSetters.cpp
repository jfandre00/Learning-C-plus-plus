#include <iostream>

class Stove{
    private:
        int temperature = 0;
    public:
    Stove(int temperature) {
        setTemperature(temperature);
    }

    int getTemperature() {
        return temperature;
    }

    void setTemperature(int temperature) {
        if(temperature < 0) {
            this -> temperature = 0;
        } else if(temperature > 10) {
            this -> temperature = 10;
        } else {
        this -> temperature = temperature;
    } // Now it is possible to set the temperature, but not to extreme values. The user can only set the temperature between 0 and 10
    }

};

int main() {

    // Abstraction = hiding unnecessary data from outside a class
    // getter = function that makes a private attribute READABLE
    // setter = function that makes a private attribute WRITABLE

    Stove stove(0);

    // stove.temperature = 10000000; is not possible because temperature is private (it was public)

    std::cout << "The temperature is: " << stove.getTemperature() << '\n';

    stove.setTemperature(450);

    std::cout << "The new temperature is: " << stove.getTemperature() << '\n';

    return 0;
}