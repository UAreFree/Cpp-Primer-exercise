#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	string s; string s_before;
	while (cin >> s && !s.empty()) {
		if (s == s_before) {
			if (!isupper(s[0])) continue;
			break;
		}
		else
			s_before = s;
	}
	if (cin.eof())
		cout << "û����ȵĵ���" << endl;
	else
		cout << s << "����������" << endl;
	return 0;
}