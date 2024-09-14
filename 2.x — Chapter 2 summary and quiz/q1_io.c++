#include "q1_io.h"
#include <iostream>

using namespace std;

int read_number()
{
    cout << "Enter a number to add: ";
    int number{};
    cin >> number;

    return number;
};

void write_answer(int number)
{
    cout << "The answer is " << number << '\n';
};