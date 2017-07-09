#include <iostream>
#include <string>
using namespace std;


int main() {
	string s1;
	getline(cin, s1);
	int length = s1.length();
	for (int i = 0; i < length; i++) {
		if (s1[i] != 'A' &&s1[i] != 'a'&& s1[i] != 'o'&& s1[i] != 'O'&& s1[i] != 'Y'&& s1[i] != 'y'&& s1[i] != 'E'&& s1[i] != 'e'&&s1[i] != 'U'&&s1[i] != 'u'&&s1[i] != 'i'&&s1[i] != 'I') {
			if (isupper(s1[i])) {
				s1[i] = s1[i] + 32;
				cout << "." << s1[i];
			}
			else
			{
				cout << "." << s1[i];
			}


			
		}
	}
	cout << endl;








}