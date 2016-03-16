#include <iostream>
#include <vector>

using namespace std;

void change(int &a, int &b) {
	a = a + b;
	b = a - b;
	a = a - b;
}

int main(void)
{
	std::vector<int> v1;
	std::vector<int> v2(10);
	std::vector<int> v3(10, 42);
	std::vector<int> v4{10};
	std::vector<int> v5{10, 42};
	std::vector<string> v6{10};
	std::vector<string> v7{10, "hi"};

	cout << "1 " << v1.cend() - v1.cbegin() << endl;
	cout << "2 " << v2.cend() - v2.cbegin() << endl;
	cout << "3 " << v3.cend() - v3.cbegin() << endl;
	cout << "4 " << v4.cend() - v4.cbegin() << endl;
	cout << "5 " << v5.cend() - v5.cbegin() << endl;
	cout << "6 " << v6.cend() - v6.cbegin() << endl;
	cout << "7 " << v7.cend() - v7.cbegin() << endl;

	cout << endl;

	//将 v7 中的所有内容都输出到屏幕上
	for (auto i = v7.cbegin(); i != v7.cend(); i++) { 
		std::cout << *i << std::endl;
	}
	return 0;
}
