#include <iostream>
#include <string>
using namespace std;

int main() {
	char s3[100]; string s1;  string s2;
	getline(cin, s1);getline(cin, s2);
	int length = s1.length();
	for (int i = 0; i < length; i++) {
		if (s1[i] != s2[i]) {s3[i] = '1';}
		else if (s1[i] ==s2[i]) {s3[i] = '0';}
		cout << s3[i];
	}
	cout << endl;




}