#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main() {
	long long i = 0x0f4494c3c1c7d4355;
	std::cout << i << std::endl;
	std::string s("test");
	//std::cout << (((((("test")))))) << std::endl;

	for(auto i=s.begin(); i != s.end(); i++){
		std::cout << *i << std::endl;
	}
}
