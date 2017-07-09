#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	pair<int, int>a[1001];
	int s, n, flag = 0;
	cin >> s >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i].first >> a[i].second;
	}
	sort(a, a + n);
	for (int i = 0; i < n; i++) {
		if (s > a[i].first) {
			s += a[i].second;
		}
		else if (s <= a[i].first) {
			flag = 1;
			break;
		}
	}flag == 0 ? cout << "YES" << endl : cout << "NO" << endl;


}