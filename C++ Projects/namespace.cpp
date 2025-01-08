#include <iostream>

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}


int main() {

    /*
    Namespace = provides a solution for preventing names conflicts in large projects.
    Each entity needs a unique name. A namespace allows for identically names entities
    as long as the namespaces are different.
    */

   // using namespace first; // using directive
   // using namespace std; // using directive - not recommended

    int x = 0;

    std::cout << x; // 0
    std::cout << first::x; // 1
    std::cout << second::x; // 2


   return 0;
}
