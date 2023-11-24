#include<iostream>
#include<array>
#include<vector>


enum states{
    first,
    second,
    third,
    fourth
};
struct House{
    int number{};
    int stories{};
    int roomsPerstories{};
};


int main()
{
    std::array<House,states::third>ventures{
    House{6 , 54 , 1},
    House{3 , 4, 2}
    };
    

    // while making the vector in enumerations then CATD wont work
    std::vector<int> vectorarr(states::third);
    for(auto& venture:ventures)
        std::cout<<venture.number<<std::endl;

    std::cout<<ventures.size()<<std::endl;
    std::cout<<vectorarr.capacity()<<std::endl;

    


}