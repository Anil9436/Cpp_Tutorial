// #include <iostream>
// #include <string>

// enum Color
// {
//     black,
//     red,
//     blue,
// };


// // We'll show a better version of this for C++17 below
// std::string getColor(Color color)
// {
//     switch (color)
//     {
//     case black: return "black";
//     case red:   return "red";
//     case blue:  return "blue";
//     default:    return "???";
//     }
// }

// int main()
// {
//     Color shirt { blue };

//     std::cout << "Your shirt is " << getColor(shirt) << '\n';

//     return 0;
// }

#include <cstdint>  // for std::int8_t
#include <iostream>

// Use an 8-bit integer as the enum underlying type
enum Color : std::int8_t
{
    black,
    red,
    blue,
};
enum Name : std::uint16_t
{
    Namessss,
    King,
    email,
};

int main()
{
    Color c{ black };
    Name k{King};
    std::cout << sizeof(c) << '\n'; 
    std::cout<<sizeof(k)<<std::endl;
    // std::cout << << '\n'; // prints 1 (byte)

    return 0;
}