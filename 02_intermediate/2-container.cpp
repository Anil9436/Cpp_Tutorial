#include<iostream>
#include<vector>


int main()
{
    // // std::vector<int> doubles{1,4,9,16,25};
    // // std::vector v1 { 5 };
    // // std::vector v2 ( 5 );
    // int input{};
    // std::cout<<"please enter the 3 numbers:  ";
    // std::vector<int> values(3);
    // std::cin>>input;
    // values.push_back(input);
    // // for(int i:values)
    // // {
    // //     std::cout<<"["<<i<<"]"<<std::endl;
    // // }
    // // for(auto it = begin(values); it!= end(values);it++){
    // //     std::cout<<it<<std::endl;
    // // }
    // return 0;
	std::vector<int> arr(3); // create a vector of length 3

	std::cout << "Enter 3 integers: ";
	std::cin >> arr[0] >> arr[1] >> arr[2];

	std::cout << "The sum is: " << arr[0] + arr[1] + arr[2] << '\n';
	std::cout << "The product is: " << arr[0] * arr[1] * arr[2] << '\n';

	return 0;
}