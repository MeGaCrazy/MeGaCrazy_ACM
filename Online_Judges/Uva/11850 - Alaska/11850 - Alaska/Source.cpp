#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int t, a;
	while (cin >> t, t) {
		int flag = 0;
		vector<int>v;
		for (int i = 0; i < t&&cin >> a; i++)v.push_back(a);
		sort(v.begin(), v.end());
		for (int i = 1; i < t; i++) {
			if (v[i] - v[i - 1]>200) { flag = 1; break; }
		}
		if (2 * (1422 - v[t-1])>200)flag = 1;
		if (flag)cout << "IMPOSSIBLE" << endl; else cout << "POSSIBLE" << endl;
	}
}