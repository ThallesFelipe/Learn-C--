#include <iostream>

using namespace std;

int five() { return 5; }; // function that returns the value 5

int main()
{
    int a{2};           // initialize variable a with literal value 2
    int b{2 + 3};       // initialize variable b with expression 2 + 3 = 5
    int c{(2 * 3) + 4}; // initialize variable c with expression (2 * 3) + 4 = 10
    int d{b};           // initialize variable d with the value of variable b
    int e{five()};      // initialize variable e with the value returned by function five

    return 0;
};