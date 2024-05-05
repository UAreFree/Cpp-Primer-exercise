#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

bool HaveUpper(const string& s) {
	for (auto c : s)
		if (isupper(c))return true;
	return false;
}
void Tolower(string& s) {
	for (auto& c : s)
		if (isupper(c)) c = tolower(c);
}

int main() {
	string s = "Hello";
	cout << "是否有大小写，1（是），0（否）" << HaveUpper(s) << endl;
	Tolower(s);
	cout << "变为全小写：" << s << endl;
	return 0;
}