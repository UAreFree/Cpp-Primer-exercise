#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	int grade = 0;
	cin >> grade;
	//string final_grade = (grade > 90) ? "high pass" : (grade > 75) ? "pass" : (grade > 60) ? "low pass" : "fail";
	string final_grade;
	if (grade > 90)
		final_grade = "high pass";
	else if (grade > 75)
		final_grade = "pass";
	else if (grade > 60)
		final_grade = "low pass";
	else
		final_grade = "fail";
	cout << final_grade << endl;
	return 0;
}