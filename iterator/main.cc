#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
	std::vector<int> a(10);
	std::vector<string> b(20);
	string s("wocao,haolihai!!!");
	std::cout << s.length() << std::endl;
	std::cout << s.size() << std::endl;
	return 0;
}
