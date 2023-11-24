#include<iostream>
#include<array>

int main()
{
    std::array i{1,2,3,4};
    for(auto j:i)
        std::cout<<j<<" ";
    std::cout<<"\n";
}
/* Use class template argument deduction (CTAD) to have the compiler 
 deduce the type and length of a std::array from its initializers. */