#include <string>
#include <iostream>

#include "Incrementer.h"

int main()
{
	Incrementer::Builder builder;
	Incrementer incrementer{ builder.SetIncrement(5).SetStart(2).Build() };

	for (std::string input; std::getline(std::cin, input);)
	{
		if (input == "quit") break;

		int value = incrementer.Increment();
		std::cout << value;
	}

    return 0;
}