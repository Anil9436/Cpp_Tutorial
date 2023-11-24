#include<iostream>
#include<vector>



    // std::vector 
    // 
    // std::cout<<name.size()<<std::endl;
    
    // std::cout<<name.capacity()<<std::endl;

    // // capacity determines how much we can fill;
    // name.resize(5);
    // for(auto i:name)
    //     std::cout<<i<<" ";
    // std::cout<<" "<<"\n";
    // // length determines how much is filled;
    // std::cout<<name.size()<<std::endl;
    // std::cout<<name.capacity()<<std::endl;




    // std::vector<int> second(1000);
    // std::cout<<second.size()<<std::endl;
    // std::cout<<second.capacity()<<std::endl;

    // second.resize(0);
    // std::cout<<second.size()<<std::endl;
    // std::cout<<second.capacity()<<std::endl;


    // second.shrink_to_fit();
    // std::cout<<second.size()<<std::endl;
    // std::cout<<second.capacity()<<std::endl;


void printStack(const std::vector<auto>& arr)
{
    if(arr.empty())
        std::cout<<"Empty";
    for(auto i:arr)
        std::cout<<i<<" ";
    std::cout<<'\n';
}

int main()
{
    std::vector<int> name{};
    std::cout<<name.capacity()<<std::endl;
    printStack(name);
    name.push_back(99);
    printStack(name);
    name.pop_back();
    printStack(name);
    name.emplace_back(5);
    printStack(name);
    name.reserve(99);
    name.back();
    printStack(name);
    name.capacity();
    printStack(name);
    
// The resize() member function changes the length of the vector, and the capacity (if necessary).
// The reserve() member function changes just the capacity (if necessary)


}