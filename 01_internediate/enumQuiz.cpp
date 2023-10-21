#include<iostream>
#include<string_view>

enum class Animals{
    pig,
    chicken,
    goat, 
    cat,
    dog,
    duck
};


constexpr std::string_view getAnimalName(Animals name)
{
    using enum Animals;
    switch (name)
    {
    case (Animals::pig): return "pig";
    case (Animals::chicken): return "chicken";
    case (Animals::goat): return "goat";
    case (Animals::cat): return "cat";
    case (Animals::dog): return "dog";
    case (Animals::duck):return "duck";
    default: return "???";
    }
}

int main()
{
    Animals name{Animals::chicken};
    std::cout<<"A"<<getAnimalName(name)<<"has two legs"<<std::endl;
}