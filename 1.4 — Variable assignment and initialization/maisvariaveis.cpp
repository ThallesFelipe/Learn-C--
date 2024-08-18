#include <iostream>

int main()
{
    [[maybe_unused]] int x;
    [[maybe_unused]] int y, z;

    int tamanho;
    tamanho = 5;

    std::cout << tamanho << std::endl;

    tamanho = 7;

    std::cout << tamanho << std::endl;

    int numero{5};

    int a;
    int b = 5;
    int c(6);
    int d{7};
    int e = {8};
    int f{};

    d = {3};

    std::cout << f << std::endl;
    std::cout << d << std::endl;
    std::cout << a << std::endl;

    return 0;
}