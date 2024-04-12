#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	char ca1[] = "hello", ca2[] = "world";
	char ca3[12];
	strcpy(ca3, ca1);
	strcat(ca3, " ");
	strcat(ca3, ca2);
	for (char c : ca3)
		cout << c;
	return 0;
}