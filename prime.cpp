/*
 * 求给定范围内的所有质数
 * author: Z.Wind.L
 */

#include <iostream>
#include <cmath>
#include <vector>

/*
 * 基本思路：
 * 数学原理 1) : 所有大于 10 的质数个位数字都是 1, 3, 7, 9 中的一个
 * 数学原理 2) : 所有合数都可以分解成几个质数相乘 (用于验证某个给定数字是否为质数)
 */

std::vector<int> prime{2, 3, 5, 7};	//先将 10 以下的质数列举出来

//检验所给数字是否为质数，依次用当前已有的
//质数列表中的质数验证即可
bool is_prime(int num) {
	bool yes_it_is_prime = true;
	for (int i : prime) {
		if (num % i == 0) 
			yes_it_is_prime = false;
		if ((double)i > sqrt(num))
			break;
	}
	return yes_it_is_prime;
}

void create_prime(int end) {
	std::vector<int> nums{1, 3, 7, 9};
	for (int i = 10; i < end; i+=10) {
		for (int j : nums) 
			if (is_prime(i + j))
				prime.push_back(i + j);
	}
}

int main(void)
{
	int end;
	std::cout << "请输入一个边界" << std::endl;
	std::cin >> end;
	if(end > 10)
		create_prime(end);

	for (auto i : prime) {
		if (i > end)
			break;
		std::cout << i << std::endl;
	}
	return 0;
}
