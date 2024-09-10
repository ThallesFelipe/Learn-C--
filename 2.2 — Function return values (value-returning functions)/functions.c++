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

void print_doubled_number(int number)
{
    cout << number << " doubled is: " << multiply_by_2(number) << endl
         << endl;
};

int main()
{
    print_doubled_number(get_value_from_user());

    return 0;
};