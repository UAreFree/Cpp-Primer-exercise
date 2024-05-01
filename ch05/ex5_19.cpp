#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	do {
		string s1, s2;
		cout << "输入两个字符串：" << endl;
		if (cin >> s1 >> s2) {
			cout << "较短的是：" << ((s1.size() > s2.size()) ? s2 : s1) << endl;
		}
	} while (cin);
	return 0;
}