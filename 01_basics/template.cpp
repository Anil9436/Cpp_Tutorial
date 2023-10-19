#include<iostream>


// template <typename T, typename U>
// // template <typename T>

// // // template <typename X>

// // T max(T n,T r){
// //     return (n<r)?r:n;
// // }

// auto max(T n,U r)
// {
//     return (n<r)?r:n;
// }

// int main()
// {
//     std::cout<<max<int>(4,5.8)<<std::endl;
// }
// ============== 1 problem ==========
// template  <typename T>

// T add(T a, T b)
// {
//     return a+b;
// }

// int main(){
//     std::cout<<add(4,5)<<std::endl;
//     std::cout<<add(4.5,6.7)<<std::endl;
// }

// ================== 2 problem ========

// template <typename T, typename U>

// /* auto is used if we dont know the return type */

// auto mult(T x, U y)
// {
//     return (x * y);
// }

// int main()
// {
// 	std::cout << mult(2, 3) << '\n';
// 	std::cout << mult(1.2, 3) << '\n';

// 	return 0;
// }

// =============== 3 problem ============


// template <typename T,  typename Y>

auto sub(T x, Y u)
{
    return (x-u);
}
int main()
{
	std::cout << sub(3, 2) << '\n';
	std::cout << sub(3.5, 2) << '\n';
	std::cout << sub(4, 1.5) << '\n';

	return 0;
}

