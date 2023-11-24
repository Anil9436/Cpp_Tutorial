#include<iostream>



class Animal{
    public:
    void sound()
    {
        std::cout<<"First"<<std::endl;
    }
    virtual void anothersound() = 0;
};

class dog: public Animal{
    void sound(){
        std::cout<<"Bow Bow"<<std::endl;
    }
    void anothersound()
    {
        std::cout<<"Bow Bow"<<std::endl; 
    }
};

class cat: public Animal{
    void sound(){
        std::cout<<"meow meow"<<std::endl;
    }
    void anothersound()
    {
        std::cout<<"meow mewo"<<std::endl; 
    }
};



int main()
{
    Animal *firstdog = new dog();
    firstdog->anothersound();
    Animal *cat1 = new cat();
    cat1->anothersound();

}
