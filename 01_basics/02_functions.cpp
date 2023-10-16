//so justlike variables user-defined functions also have the name which can de kept by the user
#include "add.h"
#include<iostream>
#include<cstdlib>


// int getValuefromUser()
// {
//     std::cout<<"Please Enter the value ";
//     int num{};
//     std::cin>>num;
//     return num;
// }

// int main()
// {
//     std::cout<<"In main \n";
//     int num{getValuefromUser()};
//     int num2{getValuefromUser()};
//     std::cout<<"Num is "<<num <<" Num2 is "<<num2<<std::endl;
//     return EXIT_SUCCESS;
// }


// Function Arguments and parameters
// The parameters are which we provide in the function prototype
// The arguments are which we provide in the function definition
// An argument is a value that is passed from the caller to the function when a function call is made:

// void printTwo(int x,int y)
// {
//     std::cout<<"The Value of the first argument is "<< x << " The value of the second argument is "<<y<<std::endl;

// }

// int main()
// {
//     int x{44},y{32};
//     printTwo(x,y);
// }

// int add(int x, int y);
// int getUservalue()
// {
//     std::cout<<"please enter the value you want to enter : ";
//     int num{};
//     std::cin>>num;
//     return num;
// }

// void printDouble(int num)
// {
//     std::cout<<"value of argument passed is: "<<num << " The double value of  the argument is "<<num*2<<std::endl;
// }

// int main()
// {
//     int num{5};
//     int num2{4};
//     std::cout<<num<<std::endl;
//     printDouble(add(num,num2));
//     return 0;
// }

// int add(int x, int y)
// {
//     return x + y;
// } 

// Forward Declaration
// In forward Declaration we can use provide the type of the parameter but providing the name is optional
void doubleNumber(int);
int generateNum();
int main()
{
    doubleNumber(generateNum());
    return 0;
}

int generateNum()
{
    std::cout<<"Give the 2 number you want to multiply : ";
    int num{},num2{};
    std::cin>>num;
    std::cin>>num2;
    return num*num2;
}


// int main()
// {
//     doubleNumber(generateNum());
//     return 0;
// }