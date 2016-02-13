#include <iostream>

int main() {
	/*const int i = 42;
	auto j = i;
	const auto &k = i;
	auto *p = &i;
	const auto j2 = i, &k2 = i;
	std::cout << j2 << std::endl;*/
	//decltype(func()) p;
	auto t = "tetetet";
	std::cout << t << std::endl;
	int a = 3, b = 4;
	decltype(a) c = a;
	decltype((b)) d = a;
	++c;
	++d;
	std::cout << a << b << c << d << std::endl;
	return 0;
}
