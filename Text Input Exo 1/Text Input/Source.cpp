#include <iostream>
#include "operations.h"

int main()
{

	
	int mainA;
	int mainB;
	char operation;

	std::cout << "nombre A ?\t" << "\n";
	std::cin >> mainA;

	std::cout << "nombre B ?\t" << std::endl;
	std::cin >> mainB;

	std::cout << "Operation ? " << std::endl;
	std::cin >> operation;

	if (operation == '+')
	{
		std::cout << "Somme :\t" << add(mainA, mainB) << std::endl;
	}
	else if (operation == '-')
	{
		std::cout << "Difference :\t" << substract(mainA, mainB) << std::endl;
	}
	else if (operation == '*')
	{
		std::cout << "Multiplication :\t" << multiply(mainA, mainB) << std::endl;
	}
	else if (operation == '/')
	{
		std::cout << "Division :\t" << divide(mainA, mainB) << std::endl;
	}
	else
	{
		std::cout << "Operation invalide\n";
	}


}
// nice