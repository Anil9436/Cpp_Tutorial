#include<iostream>

void foo()
{
    #define ALI
}




int main()
{
   
    #if 1
    #ifndef BOB
    std::cout<<"My name is BOB\n";
    #endif

    #ifdef ALI
    std::cout<<"My name is ALI\n";
    #endif
    #endif

}

