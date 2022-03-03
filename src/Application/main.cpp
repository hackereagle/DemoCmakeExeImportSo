#include <iostream>
#include "SharedObject.hpp"

int main(int argv, char** argc)
{
        int a = 1;
        int b = 2;
        int c = Add(a, b);
        std::cout << "Add result = " << c << std::endl;

        getchar();
        return EXIT_SUCCESS;
}
