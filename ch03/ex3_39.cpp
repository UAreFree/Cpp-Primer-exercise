#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	string s1 = "hello", s2 = "world";
	if (s1 == s2)
		cout << "hello = world" << endl;
	else if (s1 < s2)
		cout << "hello < world" << endl;
	else
		cout << "hello > world" << endl;
	const char ca1[] = "hello", ca2[] = "world";
	auto result = strcmp(ca1, ca2);
	if (result == 0)
		cout << "hello = world" << endl;
	else if (result < 0)
		cout << "hello < world" << endl;
	else
		cout << "hello > world" << endl;
	return 0;
}