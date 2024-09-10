#include <iostream>

using namespace std;

int main()
{
    int value;           // Conventional variable name
    int Value;           // Unonventional variable name, should start with lower case letter)
    int VALUE;           // Unonventional variable name, should start with lower case letter and be in all lower case),
    const int VALUE = 5; // Conventional constant name
    int VaLUe;           // Unonventional variable name (see your psychiatrist if you use this)

    int my_variable; // Conventional variable name (skane_case)
    int MyVariable;  // Unonventional variable name (CamelCase)

    int my_function(); // Conventional function name (snake_case)
    int MyFunction();  // Unonventional function name (CamelCase)

    /*
    int ccount	Bad	What does the c before “count” stand for?
    int customerCount	Good	Clear what we’re counting
    int i	Either	Okay if use is trivial, bad otherwise
    int index	Either	Okay if obvious what we’re indexing
    int totalScore	Either	Okay if there’s only one thing being scored, otherwise too ambiguous
    int _count	Bad	Do not start names with underscore
    int count	Either	Okay if obvious what we’re counting
    int data	Bad	What kind of data?
    int time	Bad	Is this in seconds, minutes, or hours?
    int minutesElapsed	Good	Descriptive
    int value1, value2	Either	Can be hard to differentiate between the two
    int numApples	Good	Descriptive
    int monstersKilled	Good	Descriptive
    int x, y	Either	Okay if use is trivial, bad otherwise
    */
    return 0;
};