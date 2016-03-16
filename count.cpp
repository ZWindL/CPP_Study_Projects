/*
 * My own version
 * Copyright by Z.Wind.L
 * 2015-2015
 */
#include <iostream>
#include <vector>

std::string s;
std::vector<char> v(1);

class test {
	public:
		int b;
		void print() {
			std::cerr << "test" << std::endl;
			std::cout << b << std::endl;
		}
		test() {
			b = 0;
		}
	private:
		int private_i;
		void print_i() {
			std::cout
				<< "This is a private function"
				<< std::endl;
		}
};

void func(int a) {
	std::cout << a << std::endl;
}

int main()
{
	//typedef char *pstring;
	//const pstring cstr = 0;
	//const pstring *ps;
	int currentVal = 0, val = 0;
	// 测试类的定义和函数高亮
	func(2);
	test a;
	a.b = 5;

	if (std::cin >> currentVal) {
		int count = 1;
		while (std::cin >> val) {
			if (val == currentVal)
				count ++;
			else {
				std::cout << currentVal
					<< "出现了" << count
					<< "次" << std::endl;
				count = 1;
				currentVal = val;
			}
		}
		std::cout << currentVal
			<< "出现了" << count
			<< "次" << std::endl;
	}
	std::cout << "程序结束" << std::endl;
	return 0;
}
