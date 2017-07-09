#include <iostream>
#include <queue>
#include <algorithm>
#define F first
#define S second
using namespace std;
int main() {
	int t, n, m;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		int maxn[100] = { 1 };
		queue<pair<int, int>>q;
		pair<int, int>p;
		for (int i = 0; i < n; i++) {
			cin >> p.first; p.second = i;
			maxn[i] = p.first;
			q.push(p);
		}
		sort(maxn, maxn + n);
		n--;
		int cnt = 0;
		while (true) {
			if (q.front().F >= maxn[n]&&q.front().S==m) { cnt++; break; }
			if (q.front().F >= maxn[n])cnt++, q.pop(), n--;
			else {
				q.push(q.front());
				q.pop();
			}
		}cout << cnt << endl;
	}
}