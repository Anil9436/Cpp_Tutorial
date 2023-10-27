#include<iostream>

class calc{
    public:
    calc& add(int num){ this->num+=num; return *this;}
    calc& sub(int num){ this->num-=num;return *this;}
    calc& mul(int num){ this->num*=num; return *this;}
    calc& div(int num){ this->num/=num;return *this;}
    void print(){std::cout<<this->num<<"\n";}
    void reset(){*this = {};}
    private:
    int num{};
};


int main()
{
    calc first{};
    first.add(44).sub(33).mul(432).print(); //method chainning
    // first.print();
    // first.sub(43);
    // first.add(5424);
    // first.print();
    first.reset();
    first.print();
}