#include <iostream>

#define PRINT_JOE

void foo()
{
#define MY_NAME "Thalles"
};

int main()
{
#ifdef PRINT_JOE
    std::cout << "Joe\n"; // will be compiled since PRINT_JOE is defined
#endif

#ifndef PRINT_BOB
    std::cout << "Bob\n"; // will be excluded since PRINT_BOB is not defined
#endif

#if 0
    std::cout << "#if 0 is not printed.\n";
#endif

	std::cout << "My name is: " << MY_NAME << '\n';

    return 0;
};