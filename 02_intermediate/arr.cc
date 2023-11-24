#include <array>
#include<iostream>

int main()
{
    std::array<int, 7> a {}; // Using a literal constant

    constexpr int len { 8 };
    std::array<int, len> b {}; // Using a constexpr variable

    enum Colors
    {
         red,
         green,
         blue,
         max_colors
    };

    const std::array<int, max_colors> c {}; // Using an enumerator
    for(auto i:c)
         std::cout<<i<<std::endl;

// #define DAYS_PER_WEEK 7
    constexpr int DAYS_PER_WEEK{7};
    std::array<int, DAYS_PER_WEEK> d {}; // Using a macro (don't do this, use a constexpr variable instead)

    return 0;
}

// Define your std::array as constexpr whenever possible. If your std::array is not constexpr, consider using a std::vector instead.