#include <iostream>
#include <string>
using namespace std;
int main() {
	string s; int i = 0, n, l, r, count = 0, v[100001] = { 0 };
	cin >> s; int length = s.length();
	for (int i = 1; i < length; i++){if (s[i] == s[i - 1]){++count;} v[i] = count; }
	for (cin >> n; i < n; i++) {
		cin >> l >> r;
		cout << v[r - 1] - v[l - 1] << endl;
	}
}