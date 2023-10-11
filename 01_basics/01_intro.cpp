#include<iostream>


void addTwo(int x, int y)
{   
    std::cout<<x<<"+"<<y<<"="<<x+y<<std::endl;
}
void subTwo(int x,int y)
{
     std::cout<<x<<"-"<<y<<"="<<x-y<<std::endl;   
}

int main()
{
    // // [[maybe_unused]]int x{4};
    // // std::cout<<"Hello World\n"<<std::endl;
    // // std::cout<<x<<std::endl;
    // //std::cout<<"Enter the number: ";

    // std::cout<<"Enter the number you want to be multiplied : ";
    // int x{};
    // std::cin>>x;
    // doNothing(x);
    // //std::cin >> x;
    // std::cout<<"Entered value is : "<<alignas<<std::endl;
    // return 0;
    // int doubleNum{x*2};
    // std::cout<<"The value provided is : "<<x<<std::endl;
    // std::cout<<"The multiplied value is : "<<x*2<<std::endl;
    int x{6},y{4};
    addTwo(x,y);
    subTwo(x,y);
    return 0;
}