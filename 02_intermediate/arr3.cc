#include<array>
#include<iostream>


void passbyref(const std::array<int,7>& arr)
{
    std::cout<<arr[2]<<std::endl;
}
int main()
{
    std::array i{1,2,4,5,6,7,8};
    constexpr int length{size(i)};
    std::cout<<i.size()<<std::endl;
    std::cout<<sizeof(i)<<std::endl;
    std::cout<<length<<std::endl;
    // std::cout<<i.at(9)<<std::endl;
    passbyref(i);
    // std::cout<<std::get<9>(i)<<std::endl;


    //.size() return the length of the array.
    // sizeof() returns the byte length of the array.
    //CTAD doesn’t (currently) work with function parameters, so we cannot just specify 
}