#include<iostream>
int main() {
	int num = 50;
	int sum = 0;
	while (num <= 100) {
		sum += num;
		num++;
	}
	std::cout << "sum of 50-100 is " << sum << std::endl;
	return 0;
}