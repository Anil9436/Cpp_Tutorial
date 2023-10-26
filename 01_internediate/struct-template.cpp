#include<iostream>
#include<utility>

template <typename T,typename U>
struct great{
    T num1{};
    U num2{};
};

template <typename T,typename U>
constexpr T  greater(great<T,U> num)
{
    return (num.num1 > num.num2 ? num.num1 : num.num2);
}



int main()
{
    great<double,int>g1{44,55};
    int s  = greater(g1);
    std::cout<<s<<std::endl;
}
