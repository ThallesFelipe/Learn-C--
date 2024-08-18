#include <iostream> // biblioteca com maiorias das funcionalidades do c++

int main()
{
    int x{5};
    std::cout << "x é igual a: " << x << '\n';

    /*
    preferi '\n' do que o endl porque é mais rápido
     */

    std::cout << "Digite um número: ";
    int y{};
    std::cin >> y;

    std::cout << "Você digitou: " << y << '\n';

    std::cout << "Enter two numbers separated by a space: ";

    int x{};            // define variable x to hold user input (and value-initialize it)
    int y{};            // define variable y to hold user input (and value-initialize it)
    std::cin >> x >> y; // get two numbers and store in variable x and y respectively

    std::cout << "You entered " << x << " and " << y << '\n';
    return 0;
}