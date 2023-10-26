#include<iostream>
#include<string_view>


class Ball{
    std::string_view color{"black"};
    double radius{10};
    public:
        
        // Ball()
        // {
        //     std::cout<<"Ball("<<color<<", "<<radius<<")"<<::std::endl;
        // }
        // Ball(std::string_view color)
        // :  color{color}
        // {
        //     std::cout<<"Ball("<<color<<", "<<radius<<")"<<::std::endl;
        // }
        Ball(double rad)
        : Ball("black",20)
        {
            // std::cout<<"Ball("<<color<<", "<<radius<<")"<<::std::endl;
        }
        Ball(std::string_view color = "black", double rad = 10)
        : color{color}
        , radius{rad}
        {
            std::cout<<"Ball("<<color<<", "<<radius<<")"<<::std::endl;
        }

};

int main()
{
    Ball def{};
    Ball blue{ "blue" };
    Ball twenty{ 20.0 };
    Ball blueTwenty{ "blue", 20.0 };

    return 0;
}

/* Ball(black, 10)
   Ball(blue, 10)
   Ball(black, 20)
   Ball(blue, 20) */