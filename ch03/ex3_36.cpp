#include<iostream>
#include<iterator>
#include<vector>
using std::cout;
using std::endl;
using std::begin;
using std::end;
using std::vector;

int main() {
	//array
	int a[5] = { 1,2,3,4,5 }; int b[5] = { 1,2,3,4,6 };
	auto a_b = begin(a), a_e = end(a);
	auto b_b = begin(b), b_e = end(b);
	if (b_e - b_b == a_e - a_b) {
		for (a_b, b_b; a_b != a_e && *a_b==*b_b; a_b++, b_b++) {}
		if(a_b == a_e) cout << "两个数组相等" << endl;
		else cout << "两个数组不相等" << endl;
	}
	else {
		cout << "两个数组不相等" << endl;
	}

	// vector
	vector<int> v1(5, 0); vector<int> v2(v1);
	if (v1 == v2) cout << "两个容器相等" << endl;
	else cout << "两个容器不相等" << endl;
	
	return 0;
}