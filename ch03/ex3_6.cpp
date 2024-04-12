#include<iostream>
#include<string>

int main() {
	std::string s;
	while (std::cin >> s) {
		for (auto& a : s) {
			a = 'X';
		}
		std::cout << s << std::endl;
	}
}