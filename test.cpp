#include <iostream>
#include <vector>
#include <curl/curl.h>

int test(int t=0){
	return t;
}

int main()
{
	using namespace std;
	// currVal 保存当前要处理的数字
	// val 保存输入的数字
	int currVal = 0, val = 0;

	std::vector<int> v;
	v.size();

	if (cin >> currVal) {
	//检测输入是否为空
		int cnt = 1;	//计数变量
		while (cin >> val) {
			if (val == currVal)
				cnt ++;
			else {
				cout << currVal << " 出现"
					<< cnt << "次\a" << endl;
				currVal = val;
				cnt = 1;
			}
		}

		cout << currVal << " 出现\a" << cnt
			<< "次" << endl;
	}
	return 0;
}
