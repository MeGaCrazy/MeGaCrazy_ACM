#include <string>
#include <iostream>
using namespace std;

int main() {
	int b = 0;
	string str;
	cin >> str;
	int length = str.length();
	for (int i = 0; i < length; i++) if(str[i]<96)  b++;
	if (str[0] > 96 && b == length - 1) {
		str[0] -= 32;
		for (int i = 1; i < length; i++) {
			str[i] += 32;
		}
		cout << str << endl;
	}
	else if (b == length) {
		str[0] += 32;
		for (int i = 1; i < length; i++) {
			str[i] += 32;
		}
		cout << str << endl;
	}
	else
	{
		cout << str << endl;
	}
	



}