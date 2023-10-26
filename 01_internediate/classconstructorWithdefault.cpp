#include<iostream>
#include<string_view>

class Default{
        int one{};
        double two{};
    public:
        Default(int first=44,int second=55)
        : one{first}
        , two{second}{
            std::cout<<first<<", In first constructor "<<second<<std::endl;
        }
        Default(int name, double number)
        : one{name}
        , two{number}{
                std::cout<<name<<", In second constructor "<<number<<std::endl;
        }
        void GetValues()
        {
            std::cout<<one<<", "<<two<<std::endl;
        }
};

int main(){
    Default first{};
    Default second{2,10.9};
    first.GetValues();
}