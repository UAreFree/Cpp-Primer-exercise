#include<iostream>
#include<stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

int main() {
	int n1, n2;
	cin >> n1 >> n2;
	if (n2 == 0)
		throw runtime_error("��������Ϊ0");
	cout << "��������Ľ���ǣ�" << n1 / n2 << endl;
	return 0;
}