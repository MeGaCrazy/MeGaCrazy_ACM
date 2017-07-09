#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int temp;
	string s;
	cin >> s;
	int length = s.length();
	if (length == 1) {
		cout << s << endl;
	}
	else
	{
		for (int i = 0; i < length-2; i++) {
			for (int j = 0; j < length-2; j += 2) {
				if (s[j] > s[j + 2]) {
					temp = s[j + 2];
					s[j + 2] = s[j];
					s[j] = temp;
				}

			}
		}

		cout << s << endl;

	}




}