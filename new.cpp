#include <iostream>

int main()
{
	int a = {3.14};
	int b{3.14};
	int c = (3.14);
	int d(3.14);
	int e = 3.14;

	std::cout << a << b << c << d << e << std::endl;
	return 0;
}
