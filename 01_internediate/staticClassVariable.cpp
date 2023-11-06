// #include<iostream>

// // class example{
// //     private:
// //         static  int num11{0};
// //     public:
// //         void print()
// //         {
// //             std::cout<<this->num11<<std::endl;
// //         }
// // };
// class example{
//     // Make your static members inline or constexpr so they can be initialized inside the class definition.
//     static inline int num{4};
//     int numed;
//     public:
//         example(){numed = num++;}
//         ~example(){std::cout<<"destructor called"<<std::endl;}
//         int returnnum()const{return numed;}    
// };

// //Access static members using the class name and the scope resolution operator (::).
// // int example::num{4};
// // {
// //     return 
// // }

// int main()
// {
//     example first{};
//     example second{};
//     example third{};

//     std::cout<<first.returnnum()<<std::endl;
//     std::cout<<second.returnnum()<<std::endl;
//     std::cout<<third.returnnum()<<std::endl;


// }

#include <iostream>
#include <array>

class Something
{
private:
    static inline int s_value { 1 };

public:
    static int getValue() { return s_value; } // static member function
};

int main()
{
    std::cout << Something::getValue() << '\n';
    std::cout << Something::getValue() << '\n';
    std::cout << Something::getValue() << '\n';
    std::cout << Something::getValue() << '\n';
}
std::array<>