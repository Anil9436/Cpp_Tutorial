#include<iostream>


int linear_search(int arr[],int n, int target)
{
    for(int i{0};i<n;i++)
    {
        if(arr[i]==target)
        {
            return i;
        }
    }
    return -1;
}
int binary_search(int arr[],int n, int target)
{
    int left{0}; 
    int right{n-1};
    while(left<=right)
    {
        int mid{left+(right-left)/2};
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(arr[mid]<target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}


int main()
{
    int arr[7]{1,2,33,22,11,2,3};
    int status{linear_search(arr,7,22)};
    std::cout<<"Linear Search result is: "<<status<<std::endl;
    int bin_arr[4]{1,2,3,4};
    int result{binary_search(bin_arr,4,3)};
    std::cout<<"Binary-Search result is: "<<result<<std::endl;
}