#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	string str1;
	std::string str2("what the fuck skjdkfj 123232334 kljlk4 343l");
	for(auto c : str2) {
		if(isalpha(c))
			std::cerr << c << std::endl;
		if(isdigit(c))
			std::clog << c << std::endl;
	}
	
	//while(getline(cin, str1))
	//	if(!str1.empty())
	//		cout << str1 << endl;
	
	return 0;
}
