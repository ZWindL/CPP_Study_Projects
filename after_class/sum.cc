#include <iostream>
#include <string>

int main() {
	using std::cout; //使用命名空间 std 中的 cout
	using std::endl; //使用命名空间 std 中的 endl
	using std::string;
	
	string s1("c");
	string s2(2, '2');
	string s3(s2 + "hekjkj");
	string *s4 = new string("abccccc");
	
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << (*s4).length() << endl;
	cout << s3.size() << endl;
	
	return 0;
}
