#include "const.hpp"
#include<iostream>

// int main()
// {
//     std::cout<<constants::pi<<std::endl;
// }


// int main()
// {
// 	// std::cout << "How many students are in your class? ";
// 	// int students{};
// 	// std::cin >> students;


// 	// if (students > constants::max_class_size)
// 	// 	std::cout << "There are too many students in this class";
// 	// else
// 	// 	std::cout << "This class isn't too large you can enter "<<std::endl;

// 	// return 0;
//     int num{5};
//     std::cout<<accumulate(num)<<std::endl;
// }
int accumulate(int x)
{
    static int num{0};
    num += x;
    return num; 
}
int main()
{
    int num = 5;
    std::cout<<accumulate(num)<<std::endl;
    std::cout<<accumulate(num)<<std::endl;
    std::cout<<accumulate(num)<<std::endl;
}