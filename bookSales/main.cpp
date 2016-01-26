#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
	Sales_item total;
	std::cout << "Program Begin" << std::endl;

	if(std::cin >> total) {
		Sales_item current;
		while(std::cin >> current) {
			if(total.isbn() == current.isbn())
				total += current;
			else {
				std::cout << total << std::endl;
				cout << total.isbn() << endl;
				total = current;
			}
		}
		std::cout << total << std::endl;
	} else {
		std::cerr << "No data!?" << std::endl;
		return -1;
	}
	return 0;
}
