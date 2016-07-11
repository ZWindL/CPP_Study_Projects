#include <iostream>

int main() {
	using str = std::string;
	typedef std::string string;
	/*const int i = 42;
	auto j = i;
	const auto &k = i;
	auto *p = &i;
	const auto j2 = i, &k2 = i;
	std::cout << j2 << std::endl;*/
	//decltype(func()) p;
	auto t = "tetetet";
	std::cout << t << std::endl;
	int * a = nullptr, * b = nullptr;
	decltype(a) c = a;
	decltype((b)) d = a;
	++c;
	++d;
	std::cout << a << b << c << d << std::endl;
	return 0;
}
