#include "destructor2.hpp"


bool Network::connect1()
{
    // connect to  the socket;
    Network::enabled = true;
    return this->enabled;
}
int Network::translate()
{
    this->data = "CorrectData";
    return EXIT_SUCCESS;
}
bool Network::send1(){
    //send the translated data;
    this->enabled = false;
    return this->enabled;
}


int main()
{
    Network first{false,"Test"};
    bool res = first.connect1();
    if(res != true)
    {
        return EXIT_FAILURE;
    }
    int networkRes = first.translate();
    if(0 != networkRes)
    {
        return EXIT_FAILURE;
    }
    bool sendRes = first.send1();
    if(false != sendRes)
    {
        return EXIT_FAILURE;
    }
    std::cout<<"Reached End"<<std::endl;
    return EXIT_SUCCESS;
}