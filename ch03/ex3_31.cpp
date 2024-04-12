#include<iostream>
#include<vector>
using std::cout;
using std::endl;
using std::vector;

int main() {
	int a[10];
	for (int i = 0; i < 10; i++) {
		a[i] = i;
		cout << a[i] << endl;
	}
	return 0;
}