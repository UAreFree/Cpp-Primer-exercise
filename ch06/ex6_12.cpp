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
	cout << "������������";
	cin >> a >> b;
	swap(a, b);
	cout << "���Ϊ��" << a << " " << b << endl;
	return 0;
}