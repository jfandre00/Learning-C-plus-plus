#include <iostream>

int main() 
{
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if(name.length() > 12) // Returns the length of the string
    {
        std::cout << "Your name can't be over 12 characters.";
    } 
    else {
        std::cout << "Hello, " << name << "!\n";
    }

    if(name.empty()) // Returns true if the string is empty
    {
        std::cout << "You didn't enter a name.";
    } 
    else {
        std::cout << "Hello, " << name << "!\n";

    }

    /*
    name.clear(); // Clears the string

    std::cout << "Hello " << name << "!\n";

    */

    name.append("@gmail.com"); // Appends a string to the end of another string

    std::cout << name << "\n";

    std::cout << name.at(0) << "\n"; // Returns the character at the specified index

    name.insert(0, "@");

    std::cout << name << "\n";

    std::cout << name.find("@"); // Returns the index of the first occurrence of the specified substring

    name.erase(0,3); // Erases a portion of the string

    std::cout << name << "\n";



    return 0;
}