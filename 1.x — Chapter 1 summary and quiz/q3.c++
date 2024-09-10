#include <iostream>

using namespace std;

int main()
{
    cout << "Enter an integer: ";
    int number_1{};
    cin >> number_1;

    cout << "Enter another integer: ";
    int number_2{};
    cin >> number_2;

    cout << number_1 << " + " << number_2 << " is " << number_1 + number_2 << ".\n";
    cout << number_1 << " - " << number_2 << " is " << number_1 - number_2 << ".\n";
    return 0;
};