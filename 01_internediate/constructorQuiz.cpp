#include<iostream>
#include<string_view>


class Ball{
        std::string_view color{};
        double radius{};
        public:
            Ball(std::string_view colorinstr, double radiusindia)
            : color{colorinstr}
            , radius{radiusindia}
            {
                // std::cout<<"Ball("<<colorinstr<<", "<<radiusindia<<")"<<::std::endl;
            }
        void print()
        {
            std::cout<<"Ball("<<color<<", "<<radius<<")"<<::std::endl;
        }

};

int main()
{
	Ball blue{ "blue", 10.0 };
	blue.print();

	Ball red{ "red", 12.0 };
	red.print();

	return 0;
}

/* Ball(blue, 10)
   Ball(red, 12) */

//Prefer value initialization over default initialization for all class types.