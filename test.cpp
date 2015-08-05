#include <iostream>

int main()
{
	// currVal 保存当前要处理的数字
	// val 保存输入的数字
	int currVal = 0, val = 0;

	if (std::cin >> currVal) {
	//检测输入是否为空
		int cnt = 1;	//计数变量
		while (std::cin >> val) {
			if (val == currVal)
				cnt ++;
			else {
				std::cout << currVal << " 出现"
					<< cnt << "次\a" << std::endl;
				currVal = val;
				cnt = 1;
			}
		}

		std::cout << currVal << " 出现\a" << cnt
			<< "次" << std::endl;
	}
	return 0;
}
