#include<iostream>
#include<vector>

// int main()
// {
//     std::vector test{1,2,3,4,5,6};
//     std::size_t length{test.size()};
//     int average{0};
//     for(int i=0;i<length;i++)
//     {
//         average += test[i];
//     }
//     std::cout<<average<<std::endl;
//     std::cout<<average/length<<std::endl;
// }
//REFACTOR THE ABOVE EXAMPLE USING TEMPLATES

// template <typename T>

// T calculateAverage(std::vector<T>& arr)
// {
//     std::size_t length = arr.size();
//     int average{0};
//     for(int i=0;i<(static_cast<int>(length));i++)
//         average += arr[i];
//     average /= static_cast<int>(length);
//     return average;

// }

// void printArray(std::vector<T>& arr)
// {
//     std::size_t count{arr.size()};
//     for (int i = 0; i < count; i++)
//     {
//         std::cout<<" "<<arr[i];
//     // 
//     }
//     printf("\n");
// }

// int main()
// {
//     std::vector<int> n{1,2,3,4,5,6};
//     // int calcu = calculateAverage(n);
//     // 
//     std::vector arr{4, 6, 7, 3, 8, 2, 1, 9};
//      printArray(arr);
//     // for(int i=0;i<arr.size();i++)
//     // {
//     // std::cout<<ret<<std::endl;
//     // }
//     return 0;
// }





// int main()
// {
//     std::vector arr{4, 6, 7, 3, 8, 2, 1, 9};
//     int num{};
//     std::cout<<"Please enter the number in between 1 and 9: ";
//     std::cin>>num;
//     std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//     for(int i=0;i<arr.size();i++)
//     {
//         if(num==arr[i])       
//              std::cout<<num<<" "<<"Present in the index value of "<< i<<std::endl;
//     }

// }

//LARGEST NUMBER

int findMax(std::vector<auto>& arr)
{
    int num{0};
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>num)
        {
            num =arr[i] ;
            
        }
        // std::cout<<arr[i]<<" "<<arr[i+1]<<std::endl;
    }
    return num;
}

int main()
{
    std::vector testScore { 84, 92, 76, 81, 56 };
    std::cout << "The max score is: " << findMax(testScore) << '\n'; // prints 92

    return 0;
}

