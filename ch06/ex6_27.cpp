#include<iostream>
#include<initializer_list>

using std::cin;
using std::cout;
using std::endl;
using std::initializer_list;

int sum(initializer_list<int> const &nl) {
	int sum = 0;
	for (auto it = nl.begin(); it != nl.end(); it++)
		sum += *it;
	return sum;
}

int main() {
	cout << sum({ 1,2,3,4,5 });
	return 0;
}