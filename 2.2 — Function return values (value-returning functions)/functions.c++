#include <iostream>

using namespace std;

int get_value_from_user()
{
    cout << "Enter an integer: ";
    int input{};
    cin >> input;

    return input;
};

int multiply_by_2(int number) { return number * 2; };

int main()
{
    int number{get_value_from_user()};

    cout << number << " doubled is: " << multiply_by_2(number) << endl
         << endl;

    return 0;
};