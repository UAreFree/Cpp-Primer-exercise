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
	cout << "������һ�����֣�";
	cin >> val;
	int j = fact(val);
	cout << "\n" << val << "!�� " << j << endl;
	return 0;
}