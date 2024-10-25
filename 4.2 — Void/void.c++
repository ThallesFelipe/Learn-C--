#include <iostream>

// The most commonly usu of void is to indicate that a function doesn't return a value
void write_value(int x)
{
    std::cout << "The value of x is: " << x << '\n';
};

int main()
{
    int x{5};
    write_value(x);
    return 0;
};