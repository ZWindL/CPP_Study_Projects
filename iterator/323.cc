#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	std::vector<int> nums{3, 443, 32, 2, 443, 2, 342, 234, 34, 566};
	//for (auto i : nums)
		//cout << i << endl;

	//for(auto i=nums.begin(); i != nums.end(); ++i)
		//*i *= 2;

	int i[] = {1,2,3,4};

	for(auto t:i){
		cout << t << endl;
	}

	//for (auto i : nums)
		//cout << i << endl;

	return 0;
}
