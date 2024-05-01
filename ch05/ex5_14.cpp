#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	string word;
	int count = 1;
	string before;
	string record;
	int record_n = 1;
	while (cin >> word) {
		if (word == before) count++;
		else {
			if (count > record_n) {
				record = word;
				record_n = count;
				count = 1;
			}
		}
		before = word;
	}
	cout << record_n << endl;
	return 0;
}