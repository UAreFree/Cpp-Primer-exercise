#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int MaxNum(const int num, const int* const p) {
	return num > * p ? num : *p;
}

int main() {
	int num = 1; int p_num = 10;
	int* p = &p_num;
	cout << "两者较大的是：" << MaxNum(num, p);
	return 0;
}