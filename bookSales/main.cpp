#include <iostream>
#include <string>
#include "Sales_item.h"

using namespace std;

int main()
{
	Sales_item book, book1;
	std::cin >> book >> book1;
	std::cout << book + book1 << std::endl;
	return 0;
}
