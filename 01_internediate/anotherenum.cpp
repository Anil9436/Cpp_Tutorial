#include "anotherenum.hpp"

int main()
{
	Fruit apple { FruitType::apple };

	if (apple.getType() == FruitType::apple)
		std::cout << "I am an apple";
	else
		std::cout << "I am not an apple";

	return 0;
}

