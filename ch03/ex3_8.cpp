#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	string s;
	while (cin >> s) {
		//for (auto& a : s) {
		//	a = 'X';
		//}
		decltype(s.size()) i = 0;
		while (i < s.size())
			s[i++] = 'X';
		cout << s << endl;
	}
}