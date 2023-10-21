#include<iostream>

// namespace enumClass{
    enum class Colors {
            black,
            blue,
            gree,
            red,
    };
// }

int main()
{
    using enum Colors;
    Colors c{black};
    std::cout<<c<<std::endl;
}