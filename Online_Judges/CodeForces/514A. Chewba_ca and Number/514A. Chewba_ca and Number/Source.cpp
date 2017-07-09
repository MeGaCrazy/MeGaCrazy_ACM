#include <iostream>
#include<string>
using namespace std;
int main() {
	string str;
	cin >> str;
	int length = str.length();
	for (int i = 0; i < length; i++) {
		if (i==0 && str[i]=='9') {
			continue;
		}
		else if (str[i] >= '5' ) {
			str[i] = '9' -str[i]+'0';
		}
	}
	cout << str << endl;
}