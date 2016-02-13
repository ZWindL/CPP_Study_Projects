#include <iostream>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
	string s("What the fuck!?");

	cout << s << endl;
	
	for(auto c : s) {
		if(isblank(c))
			cout << c << endl;
		else if(isascii(c))
			std::clog << c << endl;
	}
	
	return 0;
}
