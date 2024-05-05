#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

void printv(vector<int>& v,int i) {
	if (i == v.size()) return;
	cout << v[i] << endl;
	printv(v, ++i);
}

int main() {
	vector<int> v = { 1,2,3,4,5 };
	printv(v, 0);
	return 0;
}