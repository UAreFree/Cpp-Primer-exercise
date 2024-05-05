#include<iostream>


using std::cin;
using std::cout;
using std::endl;

int factorial(int val) {
	if (val > 1)
		return val * factorial(--val);
	return 1;
}

int main() {
	cout << factorial(3);
	return 0;
}