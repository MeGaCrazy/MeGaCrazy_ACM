#include <iostream>
#include <string>
using namespace std;
int main() {
	int n,f,m; string s;
	cin >> n;
	cin.ignore();
	while (n--) {
		f = 0, m = 0;
		getline(cin, s);
		int length = s.length();
		for (int i = 0; i < length; i++) {
			if (s[i] == 'F')f++;
			else if (s[i] == 'M')m++;
		}
		if (f==m&&f>1)cout << "LOOP" << endl; else cout << "NO LOOP" << endl;
	}
}