#include<iostream>
#include<vector>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
	const vector<string> scores = { "F","D","C","B","A","A++" };
	unsigned int grade;
	while (cin >> grade) {
		string lettergrade;
		lettergrade = (grade < 60) ? scores[0] : scores[(grade - 50) / 10];
		cout << lettergrade << endl;
	}

	return 0;
}
