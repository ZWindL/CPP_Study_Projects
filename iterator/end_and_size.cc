#include <iostream>
#include <vector>

int main(void)
{
	std::vector<int> vnums(10, 5);
	auto begin = vnums.begin();
	auto end = vnums.end();
	vnums.push_back('c');

	auto size = begin + vnums.size();

	if(end == size)
		std::cout << "equal" << std::endl;
	else
		std::cout << "unequal" << std::endl;

	return 0;
}
