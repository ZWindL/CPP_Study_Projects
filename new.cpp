#include <iostream>

void abc_(int a, int b) {
	std::cout << a + b << std::endl;
}

void abc_(std::string str) {
	std::cout << str << std::endl;
}

int main()
{
	int a = 5, b = 4;
	std::string c("Hello World");
	abc_(a, b);
	abc_(c);
	return 0;
}
