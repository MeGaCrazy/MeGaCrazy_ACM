#include <iostream>
#include <string>
using namespace std;
int main() {
	int n; string s;
	cin >> s >> n;
	int length = s.length();
	if (length % n != 0) { cout << "NO"<< endl; return 0; }
	else
	{
		length = length / n - 1;
		int temp1 = 0, temp2 = length, temp = length / 2;
		for (int i = 0; i < n; i++) {
			int j = 0, start = temp1, end = temp2;
			while (j++ <= temp) {
				if (s[start++] != s[end--]) { cout << "NO" << endl; return 0; }
			}
			temp1 += length + 1; temp2 += length + 1;
		}
		cout << "YES" << endl;
	}
}