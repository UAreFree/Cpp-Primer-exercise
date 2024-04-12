#include<iostream>
#include<vector>

using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main() {
	vector<int> v = { 1,2,3,4,5 };
	int a[5];
	for (int i = 0; i < 5; i++) {
		a[i] = v[i];
		cout << a[i] << endl;
	}
	return 0;
}