#include<cmath>
#include<cassert>
#include<iostream>
// int main()
// {
//     long result = std::pow(2,8);
//     std::cout<<result<<std::endl;
//     return 0;
// }

// void printNumber(int *test)
// {
//     assert(test != NULL);
//     std::cout<<*test;
// }
bool even_or_odd(int);

int main(){
    std::cout<<"Enter the number to check whether it is even or odd: ";
    int num{};
    std::cin>>num;
    const char* larger = (num>100) ? "greater":"smaller";
    // even_or_odd(num);
    std::cout<<larger;
}


// bool even_or_odd(int num)
// {
//     return (num%2==0)?true:false;
// }

