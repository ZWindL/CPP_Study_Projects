#include <iostream>
#include "new.h"

int main()
{
	extern const int a;
	std::cout << a << std::endl;
	return 0;
}
