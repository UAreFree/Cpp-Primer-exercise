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
	for (int (&i)[4] : ia) {
		for (int j : i) {
			cout << j << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << ia[i][j] << " ";
		}
		cout << endl;
	}
	for (int (*i)[4] = begin(ia); i != end(ia); i++) {
		for (int *j = begin(*i); j != end(*i); j++) {
			cout << *j << " ";
		}
		cout << endl;
	}
			

	return 0;
}