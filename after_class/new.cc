#include <iostream>

int main()
{
	int i = 0;
        int *p = nullptr;
        int **p2 = nullptr;

	p = &i;
	p2 = &p;
	if (std::cout << *p << **p2 << std::endl)
		return 0;
	return 9;
}
