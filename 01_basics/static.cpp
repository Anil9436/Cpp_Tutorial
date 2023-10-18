// static function example to demostrate that static function executes only one time;
#include <iostream>

int getInteger()
{
	static bool s_isFirstCall{ true };

	if (s_isFirstCall)
	{
		std::cout << "Enter an integer: ";
		s_isFirstCall = false;
	}
	else
	{
		std::cout << "Enter another integer: ";
	}

	int i{};
	std::cin >> i;
	return i;
}
inline int name();
constexpr int greater(int ,int );

int main()
{
	int a{ getInteger() };
	int b{ getInteger() };

	// std::cout << a << " + " << b << " = " << (a + b) << '\n';
    // name();
    greater(a,b);

	return 0;
}

inline int name()
{
    std::cout<<"cat"<<std::endl;
    return 0;
}

/* C++20 introduces the keyword consteval, 
which is used to indicate that a function must evaluate at compile-time, 
otherwise a compile error will result. Such functions are called immediate functions. 
*/

consteval auto compileTime(auto name)
{
    return name;
}

constexpr int greater(int x,int y)
{
    return (x>y?x:y);
}

