#include <iostream>

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

int main() {

    // Luhn Algorithm
    // 1. Double every second digit from right to left. If doubling of a digit results in a two-digit number, add up the two digits to get a single-digit number.
    // 2. Now add all single-digit numbers from step 1.
    // 3. Add all digits in the odd places from right to left in the card number.
    // 4. Sum the results from steps 2 and 3.
    // 5. If the result from step 4 is divisible by 10, the card number is valid; otherwise, it is invalid.

    // example:
    // 6011  0009  9013  9424 
    // 6 1   0 0  9 1   9 2 (second digit from right to left)
    // 12 2  0 0  18 2  18 4 (doubling the numbers)
    // 1 2 2  0 0  1 8 2  1 8 4 (spliting the numbers)
    // adding all the numbers together we get 29 (sum of all the numbers - step 2)

    // 6011  0009  9013  9424 
    //  0 1   0 9   0  3    4  4 (odd places from right to left)
    // adding all the numbers together we get 21 (sum of all the numbers - step 3)

    // 29 + 21 = 50 (sum of step 2 and step 3 - step 4)
    // 50 % 10 = 0 (step 5) - valid card number because the result is divisible by 10


    //std::string cardNumber = "6011000990139424";
    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card number: ";
    std::cin >> cardNumber;

    result = sumOddDigits(cardNumber) + sumEvenDigits(cardNumber);

    if(result % 10 == 0) {
        std::cout << "Valid card number" << '\n';
    } else {
        std::cout << "Invalid card number" << '\n';
    }






    return 0;
}
int getDigit(const int number) {

    return number % 10 + (number / 10 % 10);
}
int sumOddDigits(const std::string cardNumber) {
    int sum = 0;

    for(int i = cardNumber.size() - 1; i >= 0; i-=2) {
        sum += cardNumber[i] - '0';
    }

    return sum;
}
int sumEvenDigits(const std::string cardNumber) {
    
    int sum = 0;

    for(int i = cardNumber.size() - 2; i >= 0; i-=2) {
        sum += getDigit((cardNumber[i] - '0') * 2);
    }

    return sum;
}