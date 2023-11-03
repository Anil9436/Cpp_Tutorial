#include<iostream>
#include<string_view>


namespace Anil{
    int num{};
    namespace AnilInner{
        int num2{};
        namespace Anilinnerinner{
            int num3{55};
        }    }
}

class name{
    std::string_view name1{};
    public:
    name(std::string_view name_fn)
        :name1{name_fn}{}
    void print()
    {
        std::cout<<this->name1<<std::endl;
    }
    
};
// using ;

int main()
{
    std::cout<<" "<<Anil::AnilInner::Anilinnerinner::num3<<std::endl;
    name first{"Anil"};
    first.print();
}