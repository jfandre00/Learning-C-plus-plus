#include <iostream>

/*
int max(int x, int y) {
    return (x > y) ? x : y;
}
double max(double x, double y) {
    return (x > y) ? x : y;
}
char max(char x, char y) {
    return (x > y) ? x : y;
}
*/

// Function template 

template <typename T, typename U> // template <class T, class U>
auto max(T x, U y) { // auto is a placeholder for the return type
    return (x > y) ? x : y;
}

int main() {

    // Function template describes what a function should look like.
    // The function template is not a function, but a blueprint for a function.

    std::cout << max(1,2) << '\n';
    std::cout << max(1.2, 2.3) << '\n';
    std::cout << max('a', 'b') << '\n';


    return 0;
}