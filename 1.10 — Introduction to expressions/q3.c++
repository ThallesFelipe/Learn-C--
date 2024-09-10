#include <iostream>

int main()
{
    std::cout << 2 + 3 << '\n'; // 5

    int x{6};
    int y{x - 2}; // 4
    std::cout << y << '\n'; // 4

    int z{}; // 0
    z = x; // 6
    std::cout << z * x << '\n'; // 36

    return 0;
};