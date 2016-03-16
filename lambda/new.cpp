#include <iostream>
#include <vector>

void test() {
	std::cout << "this is a function" << std::endl;
}

int main() {
	auto lambda = [](void)->void {
		std::cout << "lambda" << std::endl;
	};
	std::string s;

	test();

	lambda();

	return 0;
}
