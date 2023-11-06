#include<iostream>
#include<string_view>
#include<vector>
#include<typeinfo>

int main()
{
    // std::string_view name{"Anil"};
    // std::cout<<name << " has the length of "<< name.length() << std::endl;
    // return 0;

    // std::vector <int> primeNumbers{2,3,5,7,9};
    std::vector <int> primeNumbers{4,3,4,6};
    // size_t size = sizeof(primeNumbers)/sizeof(primeNumbers[0]);
    std::vector vowels {"anil","kiran","rajesh","umar"}; 
    // std::cout<<size<<std::endl;
    // for(int i=0;i<size;i++)
    // {
    //     std::cout<<primeNumbers[i]<<std::endl;
    // }
    
    std::cout<<typeid(vowels).name()<<std::endl;

    // std::vector<char> vowels {'a', 'e', 'i', 'o'};

    // // Using auto for type inference
    // // auto typeInfo = typeid(vowels).name();
    // std::cout<<typeid(vowels).name()<<std::endl;

    // // std::cout << typeInfo << std::endl;

}

//One of the biggest downsides of std::vector is that it cannot be made constexpr. If you need a constexpr array, use std::array.