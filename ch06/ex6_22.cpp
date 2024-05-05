#include<iostream>

using std::cin;
using std::cout;
using std::endl;

void swap(int* &p, int* &q) {
	int* temp = p;
	p = q;
	q = temp;
}

int main() {
	int a = 1; int b = 2;
	int* p = &a; int* q = &b;
	swap(p, q);
	cout << *p << " " << *q << endl;
	return 0;
}