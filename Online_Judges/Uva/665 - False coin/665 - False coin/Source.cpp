#include <iostream>
#include <string.h>
#define fill(x,y) memset (x , y , sizeof(x))
using namespace std;
bool bla[101];
int temp1[101], temp2[101];
char s;
int main() {
	int n, k, m, x;
	cin >> m;
	while (m--) {
		fill(bla, false);
		cin >> n >> k;
		while (k--) {
			cin >> x;
			for (int i = 0; i < x; i++)cin >> temp1[i];
			for (int i = 0; i < x; i++)cin >> temp2[i];
			cin >> s;
			if (s == '=') {
				for (int i = 0; i < x; i++)bla[temp1[i]] = bla[temp2[i]] = true;
			}
		}int count = 0, ans = 0;
		for (int i = 1; i <= n; i++) {
			if (!bla[i]) {
				ans = i;
				count++;
			}
		}
		if (count > 1 || count == 0)cout << "0" << endl;
		else cout << ans << endl;
		if (m)cout << endl;
	}
}