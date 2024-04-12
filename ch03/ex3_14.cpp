#include<iostream>
#include<vector>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
int main() {
	int n = 0;
	vector<int> v;
	while (cin >> n) {
		v.push_back(n);
	}
	for (auto i : v)
		cout << i << endl;
	return 0;
}