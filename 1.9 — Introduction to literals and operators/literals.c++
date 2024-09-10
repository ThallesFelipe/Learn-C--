#include <iostream>

int main()
{
    std::cout << "Hello, world!" << std::endl;
    int x{5};

    /*
    What are "Hello, world!" and 5 in the above code?
    They are literals.
    A literal is a fixed value that is inserted directly into the source code.
    */

    std::cout << 5 << '\n'; // 5 is a literal

    int y{5};
    std::cout << y << '\n'; // y is not a literal, it's a variable

    return 0;
};