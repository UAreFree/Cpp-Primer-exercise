#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main() {
	string word;
	//һ�ζ�һ��
	//while (getline(cin, word)) {
	//	cout << word << endl;
	//}
	//һ�ζ�һ����
	while (cin >> word) {
		cout << word << endl;
	}
	return 0;
}