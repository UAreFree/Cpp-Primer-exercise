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
				throw runtime_error("��������Ϊ0");
			cout << "��������Ľ���ǣ�" << n1 / n2 << endl;
		}
		catch (runtime_error err) {
			cout << err.what()
				<< "\n�Ƿ���������������y��n" << endl;
			char c;
			cin >> c;
			if (!cin || c == 'n')
				break;
		}
	}
	return 0;
}