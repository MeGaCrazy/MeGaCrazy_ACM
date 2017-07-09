#include <iostream>
#include <map>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n, a; string s;
	while (cin >> n&&n != 0) {
		int big = 1;
		map<string, int>m;
		for (int i = 0; i < n; i++) {
			vector<int>v;
			for (int j = 0; j < 5 && cin >> a; j++)v.push_back(a);
			sort(v.begin(), v.end());
			for (int i = 0; i < 5; i++)s+= to_string(v[i]);
			++m[s]; s = "";
		}int maxn = 0;
		for (auto itr = m.begin(); itr != m.end(); itr++) {
			if (itr->second > big)
				big = itr->second, maxn = 0;
			if (itr->second == big)
				maxn += big;
		}
		cout << maxn << endl;
	}
	
}