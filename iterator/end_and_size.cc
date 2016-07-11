#include <iostream>
#include <vector>

class My_class
{
public:
	My_class (int param){
		this->param = param;
	}
	virtual ~My_class ();

private:
	int param = 0;
};

int main(void)
{
	std::vector<int> vnums(10, 5);
	auto begin = vnums.begin();
	auto end = vnums.end();
	vnums.push_back('c');

	auto size = begin + vnums.size();

	if(end == size)
		std::cout << "equal" << std::endl;
	else
		std::cout << "unequal" << std::endl;

	return 0;
}
