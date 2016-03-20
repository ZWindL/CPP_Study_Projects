#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main(void)
{
	vector<string> strs;
	string str;

	while(cin >> str)
		strs.push_back(str);

	for(auto &str : strs)
		for(auto &c : str)
			c = toupper(c);

	for(auto str : strs)
		cout << str << endl;
	return 0;
}
