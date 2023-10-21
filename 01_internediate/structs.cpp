#include<iostream>


struct Fraction{
    int age{};
    int num{};
};


int main()
{
    Fraction f{3,8};
    std::cout<<f.age <<" "<<f.num<<std::endl;
}