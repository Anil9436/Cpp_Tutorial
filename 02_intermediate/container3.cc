#include<iostream>
#include<vector>

void foo(unsigned int)
{

}
int main()
{
    std::vector<int> v{1,33,21,23,443,21};
    // auto length = std::ssize(v);
    // std::cout<<length<<std::endl;  
    std::cout<<v[4]<<std::endl;                   // possible warning: copy initialization allows narrowing conversio

    return 0;
}