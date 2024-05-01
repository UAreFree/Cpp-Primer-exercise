#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	unsigned space = 0, table = 0, enter = 0;
	string sentence;
	while (getline(cin,sentence)) { // cin >> std::noskipws >> ch
		for (auto ch : sentence) {
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
				case ' ':
					space++;
					break;
				case '\t':
					table++;
					break;
				default:
					;
			}
		}
		enter++;
	}
	cout << "Number of vowel a: \t" << aCnt << '\n'
		<< "Number of vowel e: \t" << eCnt << '\n'
		<< "Number of vowel i: \t" << iCnt << '\n'
		<< "Number of vowel o: \t" << oCnt << '\n'
		<< "Number of vowel u: \t" << uCnt << '\n'
		<< "Number of vowel white: \t" << space << '\n'
		<< "Number of vowel table: \t" << table << '\n'
		<< "Number of vowel enter: \t" << enter << endl;
	return 0;
}