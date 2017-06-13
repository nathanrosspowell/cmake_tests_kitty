#include <iostream>
#include <ios>

#include "colors/black.h"
#include "kitty/bengal.h"

int main()
{
	auto color = Black{};
	auto kitty = Bengal(color);

	return 0;
}
