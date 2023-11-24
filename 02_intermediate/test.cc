#include <iostream>
#include <random>

int main() {
    // Use a random_device to seed the random number generator
    std::random_device rd;

    // Use the Mersenne Twister engine for better randomness
    std::mt19937 gen(rd());

    // Create a uniform distribution between 0 and 1
    std::uniform_real_distribution<double> dis(0.0, 1.0);

    // Generate and print 10 random numbers between 0 and 1
    // for (int i = 0; i < 10; ++i) {
        
    // }
    double randomValue = dis(gen);
    std::cout << randomValue << std::endl;

    return 0;
}
