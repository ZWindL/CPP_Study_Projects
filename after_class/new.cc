#include <iostream>

struct Sales_data {
};

int main()
{
	Sales_data tess;
	tess.~Sales_data();
	auto b = "test";
	delete b;
	std::cout << b << std::endl;
	return 9;
}
