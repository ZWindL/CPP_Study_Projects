#include <iostream>
#include <vector>

using namespace std;
/*int main(void)
{
	vector<int> values;
	int num;
	while(cin >> num)
		values.push_back(num);
		
	decltype(values.size()) middle = values.size() / 2;
	
	for(decltype(middle) i=0; i < middle; ++i)
		cout << values[i] + values[values.size() - i] << endl;
	
	return 0;
}*/

// Another way
int main(void)
{
	vector<int> values;
	int num;
	while(cin >> num)
		values.push_back(num);
	
	vector<int> values_ = values;

	for(decltype(values.size()) i=0; i < values.size(); i++)
		cout << values[i] + values_[values_.size() - i] << std::endl;
	
	return 0;
}
