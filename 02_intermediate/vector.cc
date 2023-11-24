#include<iostream>
#include<string_view>
#include<vector>


// std::string_view& printName(std::string_view& name)
// {
//     return name;
// }

// // std::vector globalarr(5);

// std::vector  generateArray( std::vector <int>arr)
// {
//     // for(auto i:array)
//     // {
//     //     std::cout<<array[i]<<std::endl;
//     // }
//     // return 0;
//     // globalarr{};
//     return arr;
// }

// class vec{
//     public:
//         void printElement(std::vector<auto>,int);
// };


void printElement(std::vector<auto> arr, int index)
{
    if(index > (arr.size()-1))
    {
        std::cout<<"Invalid Index"<<std::endl;
    }
    else{
        std::cout<<"The element has value "<<arr[index]<<std::endl;
    }
    // std::cout<<arr.size()<<std::endl;
}
int main()
{
    std::vector v1 { 0, 1, 2, 3, 4 };
    printElement(v1, 2);
    printElement(v1, 5);

    std::vector v2 { 1.1, 2.2, 3.3 };
    printElement(v2, 0);
    printElement(v2, -1);

    return 0;
}
// int main()
// {
//     // std::string_view namesp = "ANIL";
//     // std::string_view ret = printName(namesp);
//     // std::vector arr1  =  generateArray(arr);
//     // printArray(arr1);
//     // printArray(arr1);
//     // std::cout<<arr1[4]<<std::endl;
//     std::vector arr{1,2,3,4,5};
    
// }


