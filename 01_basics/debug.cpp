#include <iostream>

#define DEBUG

int add(int x, int y)
{
std::cerr << "add() called (x=" << x <<", y=" << y << ")\n";
	return x + y;
}

void printResult(int z)
{
	std::cout << "The answer is: " << z << '\n';
}

int getUserInput()
{
	std::cout << "Enter a number: ";
	int x{};
	std::cin >> x;
	return x;
}

// int main()
// {
// 	int x{ getUserInput() };
// 	int y{ getUserInput() };

// 	int z { add(x, y) };
// 	printResult(z);
//     #ifdef  DEBUG
//     std::cout << std::unitbuf;
//     #endif
// 	return 0;
// }

#include <iostream>

int main()
{
	int x{ 1 };
	std::cout << x << ' ';

	x = x + 2;
	std::cout << x << ' ';

	x = x + 3;
	std::cout << x << ' ';

	return 0;
}