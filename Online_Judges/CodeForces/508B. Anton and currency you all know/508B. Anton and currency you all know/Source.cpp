#include <iostream>
#include <string>
using namespace std;
int main() {
	int temp=-1;
	string s; cin >> s; int length = s.length();
	for (int i = 0; i < length; i++) {
		if ((s[i] - '0') % 2 == 0)temp = i;
		if ((s[i] - '0') % 2 == 0 && s[i] < s[length - 1]) { swap(s[i], s[length - 1]);  cout << s << endl; return 0;}
		if (i == length - 1 && temp >= 0)   {         swap(s[temp], s[length - 1]);     cout << s << endl; return 0;}
	}cout << -1 << endl;
}