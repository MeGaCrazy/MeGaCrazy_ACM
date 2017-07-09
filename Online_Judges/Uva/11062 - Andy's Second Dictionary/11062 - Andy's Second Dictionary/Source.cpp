#include <iostream>
#include <ctype.h>
#include <set>
#include <string>
using namespace std;
int main() {
	string s, current = ""; int flag = 0;
	set<string>myset;
	while (cin >> s) {
		int length = s.length();
		for (int i = 0; i < length; i++) {
			if (isalpha(s[i]) && isupper(s[i]))s[i] += 32;
			if (isalpha(s[i]) || (s[i] == '-'&&i != length - 1))current += s[i];
			else if (s[i] != '-' &&current!="") {
				myset.insert(current);
				current = "";
				flag = 0;
			}
		    if (s[i] == '-'&&i == length - 1 )flag = 1;
			if (i == length - 1 && s[i] != '-')flag = 0;
	    }
		if (!flag&&current != "") { myset.insert(current); current = ""; }
	}

	 for (set<string>::iterator itr = myset.begin(); itr != myset.end(); itr++) {
		 cout << *itr << endl;
	 }
}