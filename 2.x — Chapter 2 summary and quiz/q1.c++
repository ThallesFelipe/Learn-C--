#include "q1_io.h"

int main()
{
    int first_number{read_number()};
    int second_number{read_number()};

    write_answer(first_number + second_number);

    return 0;
};