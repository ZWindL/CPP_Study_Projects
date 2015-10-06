#include <iostream>

class my_class {
	public:
		my_class() {
			std::cout << "hello" << std::endl;
		}
};

int main()
{
	int a;
	std::cout << "hello" << std::endl;

	my_class *m = new my_class();
	delete m;
	return 0;
}
