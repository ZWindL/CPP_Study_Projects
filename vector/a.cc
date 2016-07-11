#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int get_last(vector<int> v){
	return v.back();
}

vector<int> get_sub_queue(vector<int> v, int count){
	vector<int> sub;

	for (int i = 0; i < count; ++i) {
		if(i % 2 == 0)
			sub.push_back(v[i]);
	}
	return sub;
}

int get_sum(vector<int> v){
	int sum = 0;
	for(auto i : v){
		sum += i;
	}
	return sum;
}

int main(void)
{
	vector<int> queue(0);
	int count = 0, input = 0;

	cout << "please input count:" << endl;
	cin >> count;

	cout << "please input queue:" << endl;
	while(cin >> input){
		queue.push_back(input);
	}

	int last = get_last(queue);

	//检查队列中的数量是否为偶数
	if (count % 2 == 0) {
		int r_second = queue[count-2];
		//若为偶数，则要比较最后一个无关元素和倒数第二个元素的大小
		last = (last > r_second) ? last : r_second;
		vector<int> sub_q = get_sub_queue(queue, count);
		sub_q.pop_back();
		sub_q.push_back(last);
		cout << get_sum(sub_q) << endl;
	} else {
		cout << get_sum(get_sub_queue(queue, count)) << endl;
	}

	return 0;
}
