#include <iostream>
#include <string>
#include "Sales_item.h"

using namespace std;

int main()
{
	Sales_item item;

	cin >> item;
	cout << item.isbn() << endl;
	return 0;
}
