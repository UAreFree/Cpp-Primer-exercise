#include<iostream>
#include<vector>
using std::cout;
using std::endl;
using std::vector;

int main() {
	int a[10];
	for (int i = 0; i < 10; i++) {
		a[i] = i;
	}
	int b[10];
	for (int i = 0; i < 10; i++) {
		b[i] = a[i];
		cout << b[i] << endl;
	}
	//vectorÖØÐ´
	vector<int> v1(10);
	for (int i = 0; i < v1.size(); i++)
		v1[i] = i;
	vector<int> v2(v1);
	for (auto v : v2)
		cout << v << endl;
	return 0;
}