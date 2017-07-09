#include <iostream>
#include <utility>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	int t, d, m, y; string s; vector<pair<long long, string>>v; pair<long long, string>p;
	cin >> t; int tmp = t-1;
	while (t--) {
		cin >> s >> d >> m >> y;
		p.first = d + (m * 30) + (y * 30 * 12); p.second = s;
		v.push_back(p);
	}sort(v.begin(), v.end());
	cout << v[tmp].second << endl << v[0].second << endl;
}