#include<iostream>
#include<string>

int main() {
	std::string s;
	while (std::cin >> s) {
		for (char a : s) {
			a = 'X'; // 并不会改变s的值
		}
		std::cout << s << std::endl;
	}
}