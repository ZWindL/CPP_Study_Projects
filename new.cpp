#include <iostream>

int main()
{
	for (unsigned i = 11; i > 0; --i)
		std::cout << i << std::endl;

	unsigned j = 11;

	while (j > 0)
	{
		j --;
		std::cout << j << std::endl;
	}
	return 0;
}
