#include <iostream>
#include <vector>

using namespace std;

void change_defend(vector<int> &teama, vector<int> &teamb, int changea, int changeb)
{
	vector<int> tmp;
	int index = 0;
	for(auto i=teama.begin()+1; i != teama.end(); i++){
		if(index >= changea)
			break;
		tmp.push_back(*i);
		teama.erase(i);
		index ++;
	}

	index = 0;
	vector<int> tmpb;
	for(auto i=teamb.begin()+1; i != teamb.end(); i++){
		if(index >= changeb)
			break;
		tmpb.push_back(*i);
		teamb.erase(i);
		index ++;
	}

	index = 0;
	for(auto i : tmp){
		teama.insert(teama.begin()+index, i);
		index ++;
	}
	index = 0;
	for(auto i : tmpb){
		teamb.insert(teamb.begin()+index, i);
		index ++;
	}
}

int min(vector<int> v){
	int min = 0;
	for(int i : v){
		if(i <= min){
			min = i;
		}
	}
	return min;
}

int main(void)
{
	int team_count = 0;
	cin >> team_count;

	vector<vector<int>> teams(team_count);
	for(int i=0; i<team_count; i++){
		int devel = 0;
		while(cin >> devel)
			teams[i].push_back(devel);
	}

	int change_count = 0;
	cin >> change_count;

	vector<vector<int>> changes(change_count);
	for(int i=0; i<change_count; i++){
		int change = 0;
		while(cin >> change)
			changes[i].push_back(change);
	}

	for(int i=0; i<change_count; i++){
		auto change = changes[i];
		auto &teama = teams[change[0]];
		auto &teamb = teams[change[2]];
		int a = change[1];
		int b = change[3];
		change_defend(teama, teamb, a, b);
		vector<int> dots;
		for(auto i : teams){
			dots.push_back(i[0]);
		}
		cout << min(dots) << endl;
	}
	return 0;
}
