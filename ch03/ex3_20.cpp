#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main() {
	vector<int> num;
	int temp = 0;
	while (cin >> temp) {
		num.push_back(temp);
	}
	cout << "相邻之和：" << endl;
	for (decltype(num.size()) i = 0; i < num.size()-1; i++) {
		cout << num[i] + num[i + 1] << endl;
	}
	cout << "两端之和：" << endl;
	for (decltype(num.size()) left = 0, right = num.size() - 1; left <= right; left++, right--) {
		if (left == right)
			cout << num[left] << endl;
		else
			cout << num[left] + num[right] << endl;
	}
	return 0;
}