#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int fact(int val) {
	if (val == 1)return 1;
	return val * fact(val - 1);
}

int main() {
	int val = 1;
	cout << "请输入一个数字：";
	cin >> val;
	int j = fact(val);
	cout << "\n" << val << "!是 " << j << endl;
	return 0;
}