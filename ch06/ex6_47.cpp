#include<iostream>
#include<vector>
#include<cassert>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

void printv(vector<int>& v) {
	if (v.empty()) return;
#ifndef NDEBUG
	cout << "v.size():" << v.size() << endl;
#endif // !NDEBUG
	auto it = v.back();
	cout << it << endl;
	v.pop_back();
	printv(v);
}

int main() {
	vector<int> v = { 1,2,3,4,5 };
	printv(v);
	return 0;
}