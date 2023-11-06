#include<iostream>
#include<vector>

template <typename T,typename G>
void passByRef( const std::vector<T>& n, const std::vector<G>& n1)
{
    std::cout<<n[7]<<std::endl;
    // if(n[0] == n1[0])
    // {
    //     std::cout<<"true"<<std::endl;
    // }
    // std::cout<<"false"<<std::endl;
}
int main()
{
    std::vector first{1,2,3,4,5};
    std::vector second{1.1,2.2,3.4,4.1,5.7};
    passByRef(first,second);
    // passByRef(second);


}

// Although CTAD will work to deduce an vector’s element type from initializers when it is defined, 
// CTAD doesn’t (currently) work with function parameters.