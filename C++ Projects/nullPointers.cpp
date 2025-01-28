#include <iostream>

int main() {

    // Null value = a special value that means something has no value.
    // When a pointer is holding a null value, it means it is not pointing to anything.

    // nullptr = a keyword that represents a null pointer

    // nullptrs are helpful when determining if an address was assigned to a pointer

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if(pointer == nullptr) {
        std::cout << "address was not assigned!" << '\n';
    } else {
        std::cout << "address was assigned!" << '\n';
        std::cout << *pointer << '\n';

    }




    return 0;
}