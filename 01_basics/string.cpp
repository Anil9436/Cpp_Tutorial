#include<iostream>
#include<bits/stdc++.h>
#include<string>

// void printSV(std::string_view s)
// {
//     std::cout<<s<<std::endl;
// }

std::string_view getName()
{
    std::cout<<"Enter the string: ";
    std::string name{};
    std::cin>>name;
    return name;
}

int main()
{
    // std::cout<<"Please enter the name: ";
    // std::string name{};
    // std::getline(std::cin>>std::ws,name);
    // std::cout<<"please enter the colour you like: ";
    // std::string colour{};
    // std::getline(std::cin>>std::ws,colour);
    // std::cout<< std::size(name) <<std::endl;
    // std::cout<<colour<<std::endl;
    // return 0;

    // std::string_view name{"anil"};
    // printSV(name);
    // return 0;
    std::string_view name{getName()};
    std::cout<<name;
    return 0;
}

// remove_suffix()
//remove_prefix()
