#include <iostream>

int main() 
{
	int cash;
	int robux;
	float usd;
	int div;
	
	std::cout << "Made by \x1b[38;2;137;180;250mhttps://theduat.neocities.org\x1b[38;2;255;255;255m\n";
	std::cout << "Madcity cash to USD calculator.\n\n";
	std::cout << "This calculator does not factor in sales, quantity-purchase discounts, or premium discounts.\n";
	std::cout << "20k MadCity Cash for 40r$\n400r$ for $4.99USD\n40r$ for 50cUSD (rounded up)\n\n";
	std::cout << "Enter in Madcity Cash amount:\n\n> ";
	std::cin >> cash;

	div = cash / 20000;
	robux = div * 40;
	usd = div * 0.50;

	std::cout << "\n\nMadcity Cash: " << cash << "\n";
	std::cout << "Robux: " << robux << "\n";
	std::cout << "USD: " << usd << "\n";

}
