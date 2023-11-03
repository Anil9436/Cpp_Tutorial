#include<iostream>

enum class FruitType
{
	apple,
	banana,
	cherry
};

class Fruit
{
private:
	FruitType m_type { };
	int m_percentageEaten { 0 };

public:
	Fruit(FruitType type) :
		m_type { type }
	{
	}

	FruitType getType() { return m_type; }
	int getPercentageEaten() { return m_percentageEaten; }

	bool isCherry() { return m_type == FruitType::cherry; }

};