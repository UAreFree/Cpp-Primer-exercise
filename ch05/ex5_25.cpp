#include<iostream>
#include<stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

int main() {
	int n1, n2;
	while (cin >> n1 >> n2) {
		try {
			if (n2 == 0)
				throw runtime_error("除数不能为0");
			cout << "两数相除的结果是：" << n1 / n2 << endl;
		}
		catch (runtime_error err) {
			cout << err.what()
				<< "\n是否输入新数？输入y或n" << endl;
			char c;
			cin >> c;
			if (!cin || c == 'n')
				break;
		}
	}
	return 0;
}