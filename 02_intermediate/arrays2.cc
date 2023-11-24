// #include <iostream>
// #include <vector>
// #include<array>
// #include<ranges>

// // template <typename T>
// // void printReverse(const std::vector<T>& arr)
// // {
// //     // for (int index{ static_cast<int>(arr.size() - 1)}; index >= 0; --index) // index is signed
// //     // {
// //     //     std::cout << arr[static_cast<std::size_t>(index)] << ' ';
// //     // }

// //     for(auto num:arr)
// //         std::cout << num<<'\n';
// // }

// // int main()
// // {
// //     std::vector arr{ 4, 6, 7, 3, 8, 2, 1, 9 };

// //     printReverse(arr);

// //     return 0;
// // }

// // #include <iostream>
// // #include <string>
// // #include <vector>

// int main()
// {
//     using namespace std::string_view_literals; // for s suffix for std::string literals
//     std::vector words{ "peter"sv, "likes"sv, "frozen"sv, "yogurt"sv }; // std::vector<std::string>

//     // for (const auto& word : words)
//     //     std::cout << word << ' ';

//     // std::cout << '\n';


//     for(const auto& word: std::views::reverse(words))
//         std::cout<<word<<' ';
//      std::cout << '\n';

//     return 0;
// }

// #include <iostream>
// // #include <ranges> // C++
// #include <ranges>
// #include <string_view>
// #include <vector>

// int main()
// {
//     using namespace std::literals; // for sv suffix for std::string_view literals
//     std::vector words{ "Alex"sv, "Bobby"sv, "Chad"sv, "Dave"sv }; // sorted in alphabetical order

//     for (const auto& word : std::views::reverse(words)) // create a reverse view
//         std::cout << word << ' ';

//     std::cout << '\n';

//     return 0;
// }

#include<iostream>
#include <vector>

template <typename T>

bool isValueInArray(std::vector<T> arr,std::string value){
    for(auto word:arr)
    {
        if(word == value)
            return true;
        return false;
    }
}

int main()
{
    using namespace std::string_view_literals;
    std::string enteredName{""};
    std::cout<<"Please enter the name you want to check whether it exists or not: ";
    std::cin>>enteredName;
    std::vector names{ "Alex"sv, "Betty"sv, "Caroline"sv, "Dave"sv, "Emily"sv, "Fred"sv, "Greg"sv, "Holly"sv};
    // std::string_view name{"Alex"};
    bool found{isValueInArray(names,enteredName)};

    if(found)
    {
        std::cout<<"Found"<<std::endl;
    }
    else{
        std::cout<<"Not found"<<std::endl;
    }

}

