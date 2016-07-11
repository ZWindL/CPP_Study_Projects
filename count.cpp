/*
 * My own version
 * Copyright by Z.Wind.L
 * 2015-2015
 */
#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <regex>

using namespace std;

std::string s;
std::vector<char> v(1);
std::vector<string> sv;

class test {
	public:
		int b;
		void print() {
			std::cerr << "test" << std::endl;
			std::cout << b << std::endl;
			std::cout << "this" << std::endl;
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
	cout << a << endl;
}

struct Foo {
	int x;
	int y;
	int z;
	int dosomething(int a);
	int dosomething(int b, int c);
	int dosomething(std::string str1);
	int dosomething();
};

int test_function(int a, int b, int c, std::string str) {
	auto d = a + b + c;
	std::cout << str << d << std::endl;
	return 0;
}

int main()	//主函数，这条注释用来测试 tab
{
	int e = 1, f = 2, g = 3;
	std::string s("skajfklajf");
	int ddd = test_function(e, f, g, s);
	ddd = 1;
	std::vector<Foo> v(1);
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
