#include<iostream>
#include<string>

int main() {
	std::string s;
	while (std::cin >> s) {
		for (char a : s) {
			a = 'X'; // ������ı�s��ֵ
		}
		std::cout << s << std::endl;
	}
}