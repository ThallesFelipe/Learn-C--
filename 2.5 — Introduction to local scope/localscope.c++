int add(int x, int y)
{
    int z{x + y}; // z is a local variable

    return z;
};

int add(int x, int y) // function parameters x and y are local variables
{
    int z{x + y};

    return z;
};

int add(int x, int y) // x and y created and initialized here
{
    int z{ x + y };   // z created and initialized here

    return z;
}; // z, y and x are destroyed here