#include<iostream>
#include<string>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int main() {
	vector<string> word;
	string temp;
	while (cin >> temp) {
		word.push_back(temp);
	}
	for (auto& i : word) {
		for (auto& j : i) {
			j = toupper(j);
		}
		cout << i << endl;
	}
	return 0;
}