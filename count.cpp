#include <iostream>

int main()
{
	int currentVal = 0, val = 0;

	if (std::cin >> currentVal) {
		int count = 1;
		while (std::cin >> val) {
			if (val == currentVal)
				count ++;
			else {
				std::cout << currentVal
					<< "出现了" << count
					<< "次" << std::endl;
				count = 1;
				currentVal = val;
			}
		}
		std::cout << currentVal
			<< "出现了" << count
			<< "次" << std::endl;
	}

	return 0;
}

