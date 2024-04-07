#include<iostream>
int main() {
	int a = 0, b = 1;
	int* p1 = &a, * p2 = &b;
	p1 = p2;//改变指针的值
	*p1 = 2;//改变指针所指对象的值
	std::cout << a << " " << b << std::endl;
	return 0;
}