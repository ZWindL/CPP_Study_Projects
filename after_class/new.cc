#include <iostream>

int main()
{
	int i = 0, &ri = i;

	i = 5; ri = 10;
	std::cout << i << " " << ri << std::endl;
	return 0;
}
