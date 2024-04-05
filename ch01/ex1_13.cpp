#include<iostream>
int main() {
	/* 1.9
	int sum = 0;
	for (int i = 50; i <= 100; i++) {
		sum += i;
	}
	std::cout << "sum of 50-100 is " << sum << std::endl;
	*/
	/* 1.10
	for (int i = 10; i >= 0; i--) {
		std::cout << i << " ";
	}
	std::cout << std::endl;
	*/
	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "The numbers are: ";
	if (v1 < v2) {
		for (v1; v1 < v2; v1++)
			std::cout << v1 << " ";
	}
	else {
		for (v2; v2 < v1; v2++)
			std::cout << v2 << " ";
	}
	std::cout << v1 << std::endl;
	
}