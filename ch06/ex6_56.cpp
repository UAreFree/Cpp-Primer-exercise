#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int add(int a, int b) {
	return a + b;
}
int subtract(int a, int b) {
	return a - b;
}
int multiply(int a, int b) {
	return a * b;
}
int divide(int a, int b) {
	return b != 0 ? a / b : 0;
}
typedef int (*Func)(int, int);
int main() {
	vector<Func> v;
	v.push_back(add);
	v.push_back(subtract);
	v.push_back(multiply);
	v.push_back(divide);
	cout << "6 + 2: " << v[0](6, 2) << endl;
	cout << "6 - 2: " << v[1](6, 2) << endl;
	cout << "6 * 2: " << v[2](6, 2) << endl;
	cout << "6 / 2: " << v[3](6, 2) << endl;
	return 0;
}