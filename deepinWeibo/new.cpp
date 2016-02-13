#include <iostream>
using namespace std;

bool one(int a, int b) {
	if(a + b == 9)
		return true;
	return false;
}

bool two(int a, int b) {
	if(a + b == 7) 
		return true;
	return false;
}

bool three(int a, int b) {
	if(a - b == 1) 
		return true;
	return false;
}

bool five(int a, int b) {
	if(a - b == 2)
		return true;
	return false;
}

int main() {
	int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
	cout << "Program begin" << endl;

	auto sum =  0;

	for(auto i : arr) 
		sum += i;

	std::cout << sum << std::endl;
	return 0;
}
