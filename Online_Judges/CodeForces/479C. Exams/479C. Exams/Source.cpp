#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n;
	pair<int, int>m[5001];
	cin >> n;
	for (int i = 0; i < n; i++) {cin >> m[i].first >> m[i].second;}
	sort(m, m + n);
	int day = m[0].second;
	for (int i = 1; i < n; i++) {
		if (m[i].second >= day)day = m[i].second; else day = m[i].first;
	}cout << day << endl;
}