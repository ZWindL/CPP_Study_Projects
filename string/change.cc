#include <iostream>
#include <cctype>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
	string s;
	cout << "Please input a string" << endl;
	cin >> s;

	s[2] = 'a';

	for(auto &c : s)
		c = toupper(c);

	cout << s << endl;
	return 0;
}
