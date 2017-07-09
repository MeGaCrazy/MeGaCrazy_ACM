#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main() {
	char s[1000001] = { '#' }; int n, i = 1, a, b, t = 0;
	while (scanf("%s", s) != EOF) {
		cin >> n;
		cout << "Case " << i++ << ":" << endl;
		while (n--) {
			t = 0;
			cin >> a >> b;
			if (a > b)swap(a, b);
			for (int i = a; i <= b - 1; i++) {
				if (s[i] != s[i + 1]) { t = 1; break; }
			}
			if (t == 1)cout << "No" << endl; else cout << "Yes" << endl;
		}
	}
}