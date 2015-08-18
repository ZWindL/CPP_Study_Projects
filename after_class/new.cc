#include <iostream>

int main()
{
	int i = 0;
        int *p = nullptr;

	p = &i;
	if (std::cout << *p << std::endl)
		return 0;
	return 9;
}
