#include<iostream>
#include<vector>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
	vector<string> text;
	string temp;
	while (getline(cin,temp)) {
		text.push_back(temp);
	}
	for (auto it = text.begin(); it != text.end() && !it->empty(); it++) {
		for (auto& s : *it) {
			if(isalpha(s)) s = toupper(s);
		}
	}
	for (auto it = text.cbegin(); it != text.cend() && !it->empty(); it++)
		cout << *it;
	return 0;
}