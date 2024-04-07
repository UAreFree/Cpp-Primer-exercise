#include<iostream>
int main() {
	int a = 3, b = 4;//a:int b:int
	decltype(a) c = a;//c:int
	decltype((b)) d = a;//d:int &
	++c;//c=4
	++d;//d=4
	//a=4 b=4
	std::cout << a << " " << b << " " << c << " " << d << std::endl;
	return 0;
}