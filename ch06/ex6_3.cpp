#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int fact(int val) {
	if (val == 1)return 1;
	return val * fact(val - 1);
}

int main() {
	int j = fact(5);
	cout << "5! ÊÇ " << j << endl;
	return 0;
}