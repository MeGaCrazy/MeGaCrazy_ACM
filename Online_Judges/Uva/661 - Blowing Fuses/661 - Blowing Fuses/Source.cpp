#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int sum = 0, n, i = 1, m, a, c, t = -1;
	while (cin>>n>>m>>c) {
		if (!n&&!m&&!c)return 0;
		int v[100] = { 0 }, arr[100] = { 0 };
		t = 0, sum = 0;
		for (int i = 1; i <= n; i++)cin >> arr[i];
		for (int i = 1; i <= m; i++) {
			cin >> a;
			if (v[a] == 0)sum += arr[a], v[a] = -1; else sum -= arr[a], v[a] = 0;
			t = max(t, sum);
		}
		if (t > c)cout << "Sequence " << i++ << endl << "Fuse was blown." << endl << endl;
		else cout << "Sequence " << i++ << endl << "Fuse was not blown." << endl << "Maximal power consumption was " << t << " amperes." << endl << endl;
	}
}