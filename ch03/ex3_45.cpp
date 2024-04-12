#include<iostream>

using std::cout;
using std::endl;
using std::begin;
using std::end;

int main() {
	int ia[3][4] = {
		{1,2,3,4},
		{1,2,3,4},
		{1,2,3,4}
	};
	for (auto &i : ia) {
		for (auto j : i) {
			cout << j << " ";
		}
		cout << endl;
	}
	for (auto i = 0; i < 3; i++) {
		for (auto j = 0; j < 4; j++) {
			cout << ia[i][j] << " ";
		}
		cout << endl;
	}
	for (auto i = begin(ia); i != end(ia); i++) {
		for (auto j = begin(*i); j != end(*i); j++) {
			cout << *j << " ";
		}
		cout << endl;
	}

	return 0;
}