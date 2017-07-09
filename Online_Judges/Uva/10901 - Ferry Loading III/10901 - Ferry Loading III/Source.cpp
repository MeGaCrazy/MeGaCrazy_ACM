#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	int test, n, m, t,a; string s;
	cin >> test;
	while (test--) {
		cin >> n >> t >> m;
		queue<int>l, r;
		vector<int>tmp;
		for (int i = 0; i < m; i++) {
			cin >> a >> s;
			if (s[0] == 'l')l.push(a);
			else r.push(a);
		}int cnt = 0, flag = 0;
		while (!l.empty() || !r.empty()) {
			cnt++; int number = 1;
			if (flag == 0) {
				while (!l.empty() && number++ <= n) {
					tmp.push_back((l.front()+cnt*10));
					l.pop();
				}
			}
			else
			{
				while (!r.empty() && number++ <= n) {
					tmp.push_back((r.front()+cnt * 10));
					r.pop();
				}
			}
			flag = 1 - flag;
		}sort(tmp.begin(), tmp.end());
		for (int i = 0; i < m;i++) {
			cout << tmp[i] << endl;
		}
	}
}