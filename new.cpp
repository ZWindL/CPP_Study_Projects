#include <iostream>
#include <cctype>

void abc_(int a, int b) {
	std::cout << a + b << std::endl;
	std::cout << "who are you" << std::endl;
}

void abc_(std::string str) {
	std::cout << str << std::endl;
}

int main()
{
	int a = 5, b = 4;
	std::string c("Hello World");
	c.size();
	abc_(a, b);
	abc_(c);
	return 0;
}
