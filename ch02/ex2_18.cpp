#include<iostream>
int main() {
	int a = 0, b = 1;
	int* p1 = &a, * p2 = &b;
	p1 = p2;//�ı�ָ���ֵ
	*p1 = 2;//�ı�ָ����ָ�����ֵ
	std::cout << a << " " << b << std::endl;
	return 0;
}