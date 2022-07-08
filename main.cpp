#include "Knapsack.hpp"
#include <iostream>

int main()
{
	Robber robber(30); 
	Shop shop;
	std::cout << shop;
	std::cout << robber;
	robber.robWhatever(shop);
	std::cout << "Value of backpack: " << robber.getValue() << std::endl;
	std::cout << shop;
	std::cout << robber;

	return 0;
}
