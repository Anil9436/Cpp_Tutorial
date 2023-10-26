#include <iostream>

// Provide the definition for IntPair and the print() member function here
struct IntPair{
    int num1{};
    int num2{};
    void print() const // to call on the const members we need to declare it as const
    {
        std::cout<< "("<<num1<<", "<<num2<<")"<<std::endl;
    }
    void print()  // to call on the const members we need to declare it as const
    {
        std::cout<< "("<<num1<<",calling 2"<<num2<<")"<<std::endl;
    }
    // bool isEqual(IntPair a)
    // {
    //     // return (num.num1 == num.num2?true:false);
    //     return (num1 == a.num1) && (num2 == a.num2);
    // }
};

int main()
{
	  IntPair p1 {1, 2};
	const IntPair p2 {3, 4};

	std::cout << "p1: ";
	p1.print();

	std::cout << "p2: ";
	p2.print();

    // std::cout<<p1.isEqual(p1)<<std::endl;
    // std::cout<<p1.isEqual(p2)<<std::endl;


	return 0;
}