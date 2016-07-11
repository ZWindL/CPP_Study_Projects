#include <iostream>
#include <iomanip>
#include <cmath>

#define PI 3.14159265f

using namespace std;

/*int float_equal(double a, double b)
{
	if(a - b <= 0.00001)
		return 1;
	return 0;
}*/

//求第二层图形边长的函数
double child_length(double parent_len, int n){
	double angle = 180.0 * (n - 2) / n;
	angle = PI / 180 * angle;
	double result = sin(angle / 2)  * parent_len;
	return result;
}

//求和的递归函数
double sum(int n, int k, double l){
	if(k < 1){
		return (n - 1) * l;
	} else {
		return (n - 0.5) * l + sum(n, k - 1, child_length(l, n));
	}
}

int main(void)
{
	int n = 0, k = 0;
	double l = 0.0;

	cin >> n;
	cin >> k;
	cin >> l;

	//cout << child_length(l, n) << endl;
	cout << std::setprecision(20) << sum(n, k, l) << endl;
	return 0;
}
