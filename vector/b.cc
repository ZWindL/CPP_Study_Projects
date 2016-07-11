#include <iostream>
#include <vector>

using namespace std;

int pow(int x, int n){
	if(x == 1 || x == 0)
		return x;
	else if(n > 1) {
		return x * pow(x, n-1);
	} else {
		return 1;
	}
}

int factorial(int n){
	if(n <= 0){
		return 1;
	} else {
		return n * factorial(n - 1);
	}
}

int arrange(int m, int n){
	if(m < n)
		return 0;
	return factorial(m) / factorial(m - n);
}

int count_square(int len, int m){
	int result = 0;
	if(len % 2 == 0){
		len /= 2;
	}

	for(int i=1; i<=len; i++){
		result += arrange(m, i);
	}
	return result;
}

int main(void)
{
	return 0;
}
