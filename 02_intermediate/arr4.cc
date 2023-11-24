#include<iostream>
#include<array>



template <typename N,std::size_t X>

void passbyred(std::array<N,X>& arr)
{
    // for(auto i:arr)
    //     std::cout<<i<<" ";
    // std::cout<<'\n';
    static_assert( X > 3);

    std::cout<<std::get<3>(arr)<<" "<<'\n';

}
int main()
{
    std::array<int,5> a{1,2,3,4,5};
    passbyred(a);

    std::array<double,4> d{1.1,2.2,12.5,44.2};
    passbyred(d);


}