#include <iostream>

double getTotal(double prices[], int size);

int main() {

    double prices[] = {4.99, 10.99, 6.87, 7.99, 8.49};
    int size = sizeof(prices) / sizeof(prices[0]);

    double total = getTotal(prices, size);

    std::cout << "The total is: $" << total << '\n';


    return 0;
}

double getTotal(double prices[], int size) {
    double total = 0;

   for(int i = 0; i < size; i++) {
       total += prices[i];
   }

   return total;
}