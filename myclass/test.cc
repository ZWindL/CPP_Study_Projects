#include <iostream>
#include <string>
#include "apple.hpp"

int main()
{
	using namespace apple;
	std::string s = "hello";
	s.clear();
	apple_ aple;
	aple.print_sth();
	std::cout << s << std::endl;
	return 0;
}
