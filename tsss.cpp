#include <vector>
#include <iostream>

using namespace std;

int main() {
	vector<string> a{
		"fdjkldf",
		"fjdlfsj",
		"jljdaldjf"
	};
	cout << a.size() << endl;

	for (auto i : a) {
		std::cout << i << std::endl;
	}
	return 0;
}
