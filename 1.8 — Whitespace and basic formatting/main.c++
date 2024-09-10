#include <iostream>

int main()
{
    std::cout
        << "Hello,world!" << std::endl;

    // Harder to read
    int cost = 57;
    int tax = 5;
    int price_per_item = 10;

    // Easier to read
    int cost =           57;
    int tax =            5;
    int price_per_item = 10;

    // Harder to read
    std::cout << "Hello world!\n"; // cout lives in the iostream library
    std::cout << "It is very nice to meet you!\n"; // these comments make the code hard to read
    std::cout << "Yeah!\n"; // especially when lines are different lengths

    // Easier to read
    std::cout << "Hello world!\n";                 // cout lives in the iostream library
    std::cout << "It is very nice to meet you!\n"; // these comments make the code hard to read
    std::cout << "Yeah!\n";                        // especially when lines are different lengths

    return 0;
};