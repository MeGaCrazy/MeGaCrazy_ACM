#include <iostream>
#include <string>
using namespace std;
int main() {
	string s, s1; int n; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s; s1 += s;
	}for (int i = 0, j = s1.length() - 1; i <= j; i++, j--) {
		if (s1[j] != s1[i]) {cout << "NO" << endl; return 0;}
	}cout << "YES" << endl;
}