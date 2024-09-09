#include <iostream>

using namespace std;

void doNothing(int &)
{
}

int main()
{
    int x;
    cout << x << '\n';

    int y;
    doNothing(y);
    cout << y << '\n';

    cout << sizeof(short) << '\n';

    return 0;
}