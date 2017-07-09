#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
	string s[11], d; int n,cost,t;
	cin >> n;
	while (1) {
		map <string, int>m;
		for (int i = 0; i < n; i++)cin >> s[i];
		for (int i = 0; i < n; i++) {
			cin >> d >> cost >> t;
			if (t != 0)m[d] -= (cost - (cost%t));
			for (int i = 0; i < t; i++) {
				cin >> d;
				m[d] += (cost) / t;
			}

		}
		for (int i = 0; i < n; i++) { cout << s[i] << " " << m[s[i]] << endl; }
		if (cin >> n) cout << endl; else break;
	}
}