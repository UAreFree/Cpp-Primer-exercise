#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
	vector<int> num = { 1,2,3,4,5 };
	for (auto it = num.begin(); it != num.end(); ++it)
		*it = (*it % 2 == 0) ? *it : *it * 2;
	for (auto n : num)
		cout << n << endl;
	return 0;
}