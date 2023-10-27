#include<iostream>

// class myClass{
//     public:
//         myClass(int num)
//         : id{num}{}
//         int getID(){ return id;}
//         int setID(int num){return id=num;}
//         void print(){std::cout<<this->id<<"\n";}
//     private:
//         int id{};
// };



// void print() { std::cout << m_id; }       // implicit use of this
// void print() { std::cout << this->m_id; } // explicit use of this 

struct thisPointer
{
    int num{};
    void setNum(int num)
    {
        this->num = num;
        std::cout<<"The value of local num: "<<num<<std::endl;
        std::cout<<"The value of global num: "<<this->num<<std::endl;
    }
};





int main()
{
    // myClass first{2};
    // std::cout<<first.getID()<<"\n";
    // // std::cout<<" "<<first.setID(5)<<"\n";
    // std::cout<<first.getID()<<"\n";
    // first.print();
    thisPointer first{1};
    first.setNum(7);
}