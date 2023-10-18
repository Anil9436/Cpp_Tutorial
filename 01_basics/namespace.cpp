

// #include "add.h" //namespace example
// #include<iostream>


// // void print(const std::string name)
// // {
// //     std::cout<<name;
// // }


// // namespace anil{
// //     void namePrint(const std::string name)
// //     {
// //         std::cout<<name<<std::endl;
// //         ::print(name);
// //     }
// // }

// int main()
// {
//     // const std::string name{"Anil"};
//     // anil::namePrint(name);
//     // ::print(name);

//     std::cout<<BasicMath::add(3,6);
//     return 0;
// }



#include <iostream>

namespace Foo
{
    namespace Goo // Goo is a namespace inside the Foo namespace
    {
        int add(int x, int y)
        {
            return x + y;
        }
    }
}


inline namespace v1{
    void dosomething()
    {
        std::cout<<"cat"<<std::endl;
    }
}

namespace two{
    void dosomething()
    {
        std::cout<<"anothrecall"<<std::endl;
    }
}
int main()
{
    // namespace Active = Foo::Goo;
    // std::cout << Active::add(1, 2) << '\n';
    // return 0;
    dosomething(); // this will calls the inline function
    v1::dosomething(); // this will calls the first namespace
    two::dosomething(); // this will calls the second namespace
    return 0;
}
//Non-const global variables are external by default (if used, the extern keyword will be ignored).
// Namespace Alias