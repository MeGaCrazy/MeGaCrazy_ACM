#include <iostream>
#include <string>
using namespace std;



int main() {
	string s;
	cin >> s;
	int length = s.length();
		for (int i = 0; i < length; i++) {
			if (s[i] == 'W'&& s[i + 1] == 'U'&& s[i + 2] == 'B') {
				s[i] = s[i + 1] = s[i + 2] =' ';
			}
		}
		cout << s << endl;






}