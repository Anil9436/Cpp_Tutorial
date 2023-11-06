
#include <iostream>
#include <string>
template <typename P, typename Q, typename R>
class Triad{
    private:
        P first{};
        Q second{};
        R third{};
    public:
        Triad(const P& firstP,const Q& secondQ, const R& thirdR)
        : first{firstP},
        second{secondQ},
        third{thirdR}{}
        void print() const
        {
            std::cout<<"["<<first<<" "<<second<< " "<<third<<"]";
        }
        
};
// template <typename P, typename Q, typename R>
// void Triad<P , Q, R>::print() const
// {
//     std::cout<<"["<<first<<" "<<second<< " "<<third<<"]";
// }

int main()
{
	Triad<int, int, int> t1{ 1, 2, 3 };
	t1.print();
	std::cout << '\n';

	using namespace std::literals::string_literals;
	const Triad t2{ 1, 2.3, "Hello"s };
	t2.print();
	std::cout << '\n';

	return 0;
}