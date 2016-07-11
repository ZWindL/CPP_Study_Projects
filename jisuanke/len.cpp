#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int str_len(char *str);

int main(){
	char *str = new char[100];
	cin >> str;
	cout << str_len(str) << endl;

	delete[] str;
	return 0;
}

int str_len(char *str){
	cout << str << endl;
	cout << strlen(str) << endl;
	int len = 0;
	return len;
}
