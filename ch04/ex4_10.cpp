#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main() {
	vector<int> num;
	int n = 0;
	while (cin >> n && n != 42) {
		num.push_back(n);
		cout << n << endl;
	}
	return 0;
}