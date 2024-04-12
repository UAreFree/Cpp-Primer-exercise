#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main() {
	string s_total;
	for (string s; cin >> s; cout << (s_total += (s + " ")));
	return 0;
}