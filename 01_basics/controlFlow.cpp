#include <iostream>

int main()
{
    if (true)
        int x{ 5 };
    else
        int x{ 6 };
    std::cout << x << '\n'; // x isn't in scope here

    return 0;
}

