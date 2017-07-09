#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	cin >> s; int length = s.length();
	if (length == 1) {
		if ((int)s[0] % 4 == 0)cout << 4 << endl; else cout << 0 << endl;
	}
	else {
		if (((int)s[length - 2] * 10 + (int)s[length - 1]) % 4 == 0)cout << 4 << endl; else cout << 0 << endl;
	}
}