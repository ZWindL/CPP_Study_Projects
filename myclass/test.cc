#include <iostream>
#include <string>
#include "test.h"

int main()
{
	using namespace apple;
	string s = "hello";

	apple_ a;
	a.print_sth();
	a.count = 0;

	cout << s << endl;

	return 0;
}
