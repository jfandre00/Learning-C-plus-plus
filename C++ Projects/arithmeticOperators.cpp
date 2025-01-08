#include <iostream>

int main() {

    // arithmetic operators = return the result of a specific arithmetic operation (+ - * /)

    int students = 20;

    //students = students + 1;
    //students+=1;
    students++;

    std::cout << students << '\n';

    students = students - 1;
    //students-=1;
    //students--;

    students = students * 2;
    //students*=2;

    students = students / 2;
    //students/=2;

    int remainder = students % 3;

    std::cout << students << '\n';
    std::cout << remainder << '\n';

    // order of operations
    // parentheses, multiplication, division, addition, subtraction

    int result = 6 - 5 + 4 * 3 / 2;
    //first 4*3 = 12
    //then 12/2 = 6
    //then 6+5 = 12
    //then 6-5 = 7
    std::cout << result << '\n';

    result = 6 - (5 + 3) * 3 / 2;
    //first 5+3 = 8
    //then 8*3 = 24
    //then 24/2 = 12
    //then 6-12 = -6
    std::cout << result << '\n';


    return 0;
}