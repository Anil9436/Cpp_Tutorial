// Define a struct named Item that contains 
// two members: std::string_view name and int gold.
// Define a std::array and initialize it with 4 Item objects,
// explicitly specifying the element type for each initializer.

// The program should print the following:


// A sword costs 5 gold.
// A dagger costs 3 gold.
// A club costs 2 gold.
// A spear costs 7 gold.

#include<iostream>
#include<array>

struct Item{
    std::string_view name{};
    int gold{};
};

int main()
{
    std::array<Item,4> arr{};
    arr[0] = {"sword",5};
    arr[1] = {"dagger",3};
    arr[2] = {"club",2};
    arr[3] = {"spear",7};

    for(auto i:arr)
        std::cout<<" A "<< i.name << " costs " << i.gold << " gold "<<std::endl;
}
