
#include "io.h"
int readNumber()
{
    std::cout<<"Please enter two values for addition: ";
    int num{},num2{};
    std::cin>>num>>num2;
    return num+num2;
}
void writeAnswer(int num)
{
    std::cout<<"The result of the both added values is: "<<num<<std::endl;
}
