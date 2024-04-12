#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	string s;
	while (cin >> s) {
		string temp;
		for (auto& a : s) {
			if (!ispunct(a)) temp += a;
		}
		s = temp;
		cout << s;
	}
}