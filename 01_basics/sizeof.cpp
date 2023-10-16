#include <iomanip> // for std::setw (which sets the width of the subsequent output)
#include <iostream>

int main()
{
    std::cout << std::left; // left justify output
    std::cout << std::setw(14) << "bool:" << sizeof(bool) << " bytes\n";
    std::cout << std::setw(14) << "char:" << sizeof(char) << " bytes\n";
    std::cout << std::setw(14) << "short:" << sizeof(short) << " bytes\n";
    std::cout << std::setw(14) << "int:" << sizeof(int) << " bytes\n";
    std::cout << std::setw(14) << "long:" << sizeof(long) << " bytes\n";
    std::cout << std::setw(14) << "long long:" << sizeof(long long) << " bytes\n";
    std::cout << std::setw(14) << "float:" << sizeof(float) << " bytes\n";
    std::cout << std::setw(14) << "double:" << sizeof(double) << " bytes\n";
    std::cout << std::setw(14) << "long double:" << sizeof(long double) << " bytes\n";

    return 0;
}

