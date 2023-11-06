#include<iostream>


class value{
    private:
        int m_value;
    public:
        value(int value):m_value{value}{}
        bool memFunc(const value& other);
        friend bool nonmemfunc(const value& other, const value& other2);
};

bool value::memFunc(const value& value)
{
    return m_value == value.m_value;
}
 

bool nonmemfunc(const value& one, const value& two)
{
    return one.m_value == two.m_value;
}



int main()
{
    value first{7};
    value second{6};

    std::cout<<first.memFunc(second)<<std::endl;
    std::cout<<nonmemfunc(first,second)<<std::endl;
}



