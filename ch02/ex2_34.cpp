#include<iostream>
int main() {
	int i = 0, & r = i;
	auto a = r;

	const int ci = i, & cr = ci;
	auto b = ci;
	auto c = cr;
	auto d = &i;
	auto e = &ci;

	auto& g = ci;
	
	//a = 42;//a = 42 int
	//b = 42;//b = 42 int
	//c = 42;//c = 42 int
	//d = 42;//error int*
	//e = 42;//error const int*
	//g = 42;//error const
	return 0;
}