#include<iostream>
#include<string_view>

class Network{
    private:
        bool enabled{false};
        std::string_view data{"name"};
    public:
        Network(bool n, std::string_view data_n)
        : enabled{false},
          data{data_n}{}
        ~Network()
        {
            std::cout<<"Destroyed the parameters"<<std::endl;
        }
        bool connect1();
        int translate();
        bool send1();
};
       