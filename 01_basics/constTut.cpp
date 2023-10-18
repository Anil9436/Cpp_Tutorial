#include <iostream>
#include<typeinfo>

#define MAX_STUDENTS 45

// int main(){
    
//     std::cout<<MAX_STUDENTS<<std::endl;
//     return 0;
// }
constexpr int five()
{
    int x{5+4};
    return x;
}

#define LONG_INTEGRAL 5L
#define long_integral 5l
int main()
{
    // constexpr double gravity { 9.8 }; // ok: 9.8 is a constant expression
    // constexpr int sum { 4 + 5 };      // ok: 4 + 5 is a constant expression
    // constexpr int something { sum };  // ok: sum is a constant expression

    // std::cout << "Enter your age: ";
    // int age{};
    // std::cin >> age;

    // //Here age and the five doesnt return the 
    // //constant values, for age it will change in the runtime it cant be a constexpr
    // // constexpr int  myAge { age };      // compile error: age is not a constant expression
    // constexpr int x =  five();      // compile error: return value of five() is not a constant expression
    // std::cout<<x;
    // return 0;
    //INTEGRAL LITERALS

    std::cout<<<<std::endl;
    std::cout<<typeid(long_integral).name<<std::endl;
    return 0;
}

