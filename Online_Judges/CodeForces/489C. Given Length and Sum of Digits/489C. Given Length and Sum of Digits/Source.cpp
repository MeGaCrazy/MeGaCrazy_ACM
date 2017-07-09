#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int sum, m, x;
string s1, s2;
int main() {
	int count = 0;
	cin >> m >> sum;
	if (sum == 0) { m == 1 ? cout << "0" << " " << "0" << endl : cout << "-1" << " " << "-1" << endl; return 0;}
	for (int i = 0; i < m; i++) {
		x = min(sum, 9);
		s1 += x + '0';
		sum -= x;
	}
	if (sum > 0) {cout << "-1" << " " << "-1" << endl; return 0;}
	for (int i = m - 1; i >= 0; i--) { s2 += s1[i]; }
	for (int i = 0; s2[i] == '0'; i++)count++;
	s2[count]--, s2[0]++;
	cout << s2 << " " << s1 << endl;
}