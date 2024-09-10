#include <iostream>

using namespace std;

/**
 * @brief Multiplies a given number by 2.
 *
 * This function takes an integer number as input and returns the result of multiplying it by 2.
 *
 * @param number The number to be multiplied.
 * @return The result of multiplying the number by 2.
 */
int multiply_by_2(int number) { return number * 2; };

/**
 * @brief Multiplies a given number by 3.
 *
 * @param number The number to be multiplied.
 * @return The result of multiplying the number by 3.
 */
int multiply_by_3(int number) { return number * 3; };

/**
 * @brief The main function of the program.
 *
 * This function prompts the user to enter an integer, and then calls the functions
 * multiply_by_2 and multiply_by_3 to calculate the double and triple of the entered integer.
 * The results are then printed to the console.
 *
 * @return 0 indicating successful execution of the program.
 */
int main()
{
    cout << "Enter an integer: ";
    int integer{};
    cin >> integer;

    cout << "Double " << integer << " is: " << multiply_by_2(integer) << endl
         << endl;
    cout << "Triple " << integer << " is: " << multiply_by_3(integer) << endl
         << endl;

    return 0;
};