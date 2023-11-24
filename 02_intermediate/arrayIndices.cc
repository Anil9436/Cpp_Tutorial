// #include<iostream>
// #include<vector>


// namespace Students{
//     enum Names{
//         kyle,
//         nae,
//         key,
//         ume,
//         reis,
//     };
// };

// int main()
// {
//     std::vector marks{12,34,23,23,43,12};
//     marks[Students::ume] = 33;


//     std::cout<<marks[Students::ume]<<std::endl;
//     std::cout<<marks[Students::kyle]<<std::endl;

//     std::cout<<marks[Students::key]<<std::endl;


// }

#include <iostream>
#include <vector>
#include<cassert>
namespace Students
{
    enum Names
    {
        kenny, // 0
         
        kyle, // 1
        stan, // 2
        butters, // 3
        cartman, // 4
        // add future enumerators here
        max_students, // 5
       
    };
}

int main()
{
    std::vector<int> testScores{12,23,34,45,56,45,32}; // Create a vector with 5 elements

    testScores[Students::stan] = 76; // we are now updating the test score belonging to stan

    std::cout << "The class has " << Students::max_students << " students\n";

    assert(size(testScores) == Students::max_students );



    return 0;
}