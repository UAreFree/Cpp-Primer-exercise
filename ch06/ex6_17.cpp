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
	cout << "�Ƿ��д�Сд��1���ǣ���0����" << HaveUpper(s) << endl;
	Tolower(s);
	cout << "��ΪȫСд��" << s << endl;
	return 0;
}