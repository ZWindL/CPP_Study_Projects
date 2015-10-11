#include <iostream>

int main()
{
	using namespace std;
	bool a = true;

	bool b = false;

	if(a)
	{
		if(b)
			cout << "a && b = true" << endl;
		else
			cout << "just a is true" << endl;
	}
	return 0;
}
