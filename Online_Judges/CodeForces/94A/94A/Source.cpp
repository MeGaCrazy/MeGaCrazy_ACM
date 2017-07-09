#include <iostream>
#include <string>
using namespace std;

int main() {
	int count = 1;
	string str;
	getline(cin, str);
	int length = str.length();
	for (int i = 0; i < length-1; i++) {
		if (str[i] == str[i + 1]) {
			++count;
			if (count == 7) {
				cout << "YES" << endl;
				break;
			}
		}
		else
		{
			count = 1;
		}
	}
	if (count != 7) {
		cout << "NO" << endl;
	}


}