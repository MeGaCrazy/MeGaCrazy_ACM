#include <iostream>
#include <string>
using namespace std;



int main() {
	string s1, s2;
	int flag = 0;
	cin >> s1;
	cin >> s2;
	int length1 = s1.length();
	int length2 = s2.length();
	int begin = 0;
	int end = length1-1;
	for (int i = 0; i < length1; i++) {
		if (length1 != length2) {
			flag = 1;
			break;
		}
		else if (s1[begin] == s2[end]) {
			flag = 0;
		}
		else
		{
			flag = 1;
			break;
		}
		begin++;
		end--;
	}

	if (flag == 0) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}