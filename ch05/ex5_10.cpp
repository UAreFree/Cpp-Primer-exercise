#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	char ch;
	while (cin >> ch) {
		switch (ch) {
		case 'a':
		case 'A':
			aCnt++;
			break;
		case 'e':
		case 'E':
			eCnt++;
			break;
		case 'i':
		case 'I':
			iCnt++;
			break;
		case 'o':
		case 'O':
			oCnt++;
			break;
		case 'u':
		case 'U':
			uCnt++;
			break;
		default:
			;
		}
	}
	cout << "Number of vowel a: \t" << aCnt << '\n'
		<< "Number of vowel e: \t" << eCnt << '\n'
		<< "Number of vowel i: \t" << iCnt << '\n'
		<< "Number of vowel o: \t" << oCnt << '\n'
		<< "Number of vowel u: \t" << uCnt << endl;
	return 0;
}