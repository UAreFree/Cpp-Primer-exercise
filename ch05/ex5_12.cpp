#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	unsigned ff = 0, fl = 0, fi = 0;
	string sentence;
	while (getline(cin, sentence)) { // cin >> std::noskipws >> ch
		for (auto iter = sentence.cbegin(); iter != sentence.cend();iter++) {
			switch (*iter) {
			case 'f':
				if (++iter != sentence.end()) {
					switch (*iter)
					{
					case 'f':
						ff++;
						break;
					case 'l':
						fl++;
						break;
					case 'i':
						fi++;
						break;
					default:
						break;
					}
					--iter;
				}
			default:
				;
			}
		}
	}
	cout
		<< "Number of vowel ff: \t" << ff << '\n'
		<< "Number of vowel fl: \t" << fl << '\n'
		<< "Number of vowel fi: \t" << fi << endl;
	return 0;
}