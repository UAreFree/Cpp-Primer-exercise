#include<iostream>
#include<vector>

using std::endl;
using std::cin;
using std::cout;
using std::vector;

int main() {
	vector<int> v1{ 0,1,1,2 }; vector<int> v2{ 0,1,1,2,3,5,8 };
	if (v1.size() < v2.size()) {
		for (int i = 0; i < v1.size();i++) {
			if (v1[i] != v2[i]) {
				cout << "v1不是v2的前缀" << endl;
				break;
			}
			if (i == v1.size() - 1) cout << "v1是v2的前缀" << endl;
		}
	}
	else {
		for (int i = 0; i < v2.size(); i++) {
			if (v1[i] != v2[i]) {
				cout << "v2不是v1的前缀" << endl;
				break;
			}
			if (i == v2.size() - 1) cout << "v2是v1的前缀" << endl;
		}
	}
	return 0;
}