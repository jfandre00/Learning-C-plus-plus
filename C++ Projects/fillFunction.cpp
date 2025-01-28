#include <iostream>


int main() {

    // fill() function = fill the entire range with a specific value
    
    const int SIZE = 100;
    std::string foods[SIZE];

    // fill the entire array with the value "apple"
    fill(foods, foods + SIZE, "apple");

     for(std::string food : foods) {
        std::cout << food << '\n';
    }

    std::string foods2[SIZE];
    fill(foods2, foods2 + (SIZE/2), "banana");
    fill(foods2 + (SIZE/2), foods2 + SIZE, "kiwi");

    for(std::string food : foods2) {
        std::cout << food << '\n';
    }
   
    const int SIZE2 = 99;
    std::string foods3[SIZE2];

    fill(foods3, foods3 + (SIZE2)/3, "orange");
    fill(foods3 + (SIZE2)/3, foods3 + (SIZE2)/3*2, "grape");
    fill(foods3 + (SIZE2)/3*2, foods3 + SIZE2, "pear");

    for(std::string food : foods3) {
        std::cout << food << '\n';
    }



    return 0;
}