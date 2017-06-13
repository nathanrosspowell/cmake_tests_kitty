#include <iostream>
#include <ios>

#include "colors/black.h"
#include "kitty/bengal.h"

int main()
{
	auto color = Black{};
	auto kitty = Bengal(color);

	std::cout << kitty.GetName() << " is " << kitty.GetColorName() << std::endl;

	return 0;
}
