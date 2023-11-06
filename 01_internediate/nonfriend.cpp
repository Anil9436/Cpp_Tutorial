#include <iostream>



class value{
    int intvalue{0};
    public:
        value(int valuedu):intvalue{valuedu}{}
        int print() const
        {
            return intvalue;
        }
};

void nonfriendPrint(const value& val)
{
    std::cout<< val.print() << std::endl;
}

int main()
{
    value val{77};
    nonfriendPrint(val);
}