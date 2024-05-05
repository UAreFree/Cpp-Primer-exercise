#include<iostream>

using std::cin;
using std::cout;
using std::endl;

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int a, b;
	cout << "输入两个数：";
	cin >> a >> b;
	swap(a, b);
	cout << "输出为：" << a << " " << b << endl;
	return 0;
}