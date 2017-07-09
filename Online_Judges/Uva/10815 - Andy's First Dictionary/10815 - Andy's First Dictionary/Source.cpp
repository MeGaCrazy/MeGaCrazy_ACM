#include <iostream>
#include <stdio.h>
#include <set>
#include <string>
#include <ctype.h>
using namespace std;
int main() {
	string s,current;
	set<string>myset;
	while (cin>>s) {
		int length =s.length();
		current = "";
		for (int i = 0; i < length; i++) {
			if (isupper(s[i]))s[i] += 32;
			if (isalpha(s[i])) {
				current += s[i];
			}else if (current != "") {
				myset.insert(current);
				current = "";
			}

		}
		if (current != "") {
			myset.insert(current);
		}
	}
	for (set<string>::iterator itr = myset.begin(); itr != myset.end(); itr++) {
		cout<<*itr<<endl;
	}
}