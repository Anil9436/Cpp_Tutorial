#include <iostream>
#include <string>

// void greet(std::string* name=nullptr)
// {
//     std::cout << "Hello ";
//     std::cout << (name ? *name : "guest") << '\n';
// }

// int main()
// {
//     std::string n{"ANIL"};
//     greet(); // we don't know who the user is yet

//     std::string joe{ "Joe" };
//     greet(&joe); // we know the user is joe

//     return 0;
// }
const std::string& getProgramName()
{
    static const std::string name{"Calculator"};
    return name;

    /* we cant return the local variable if we have to return 
    in case if we have to return the local variable of a function then
    need to declare it as static */
}

int main()
{
    std::cout<<getProgramName()<<std::endl;
    return 0;
}