#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int absVal(int val) {
	return val >= 0 ? val : -val;
}

int main() {
	int j = absVal(-2);
	cout << "-2 的绝对值是 " << j << endl;
	return 0;
}