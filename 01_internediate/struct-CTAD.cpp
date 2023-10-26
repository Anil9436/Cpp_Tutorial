//  Class template argument deduction (CTAD) 


// #include <utility> // for std::pair

// int main()
// {
//     std::pair<int,int > p1{ 1, 2 }; // explicitly specify class template std::pair<int, int> (C++11 onward)
//     std::pair p2{ 1, 2 };           // CTAD used to deduce std::pair<int, int> from the initializers (C++17)

//     std::pair<int,int> p1{ 1, 2 }; // in C++ 17 we need to explicitly give the variable type
// std::pair p3{3,34}; //but  c++ 20 we dont need to mention explicitly the variables will be declaring the type of the variable

//     return 0;
// }
#include<iostream>
#include<string>
// struct Test{
//     int name{};
//     int age{};
//     int wage{};
//     void print()
//     {
//         std::cout<<name<<" "<<age<<" "<<wage<<std::endl; 
//     }
// };
// int main()
// {
//     Test test1{1,4,333};
//     test1.print();
// }
struct Person
{
    std::string name{};
    int age{};

    void kisses(const Person& person)
    {
        std::cout << name << " kisses " << person.name << '\n';
    }
};

int main()
{
    Person joe{ "Joe", 29 };
    Person kate{ "Kate", 27 };

    joe.kisses(kate);

    return 0;
}
