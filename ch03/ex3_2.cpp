#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main() {
	string word;
	//一次读一行
	//while (getline(cin, word)) {
	//	cout << word << endl;
	//}
	//一次读一个词
	while (cin >> word) {
		cout << word << endl;
	}
	return 0;
}