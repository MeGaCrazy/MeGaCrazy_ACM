#include <iostream>
#include <vector>
#include <algorithm>
#define MAXN 5000000
using namespace std;
int main() {
	int t, a;
	cin >> t;
	while (t--) {
		vector <int>v;
		long long sum = 0, tempsum = 0;
		while (cin >> a, a)v.push_back(a);
		int length = v.size();
		sort(v.begin(), v.end());
		for (int i = length - 1,s=0; i >= 0;s++,i--) {
			int tempsum = (v[i] * 2); int tmp = s;
			while (tmp--)tempsum *= v[i];
			sum += tempsum;
			if (sum > MAXN)break;
		}if (sum < MAXN)cout << sum << endl; else cout << "Too expensive" << endl;
	}
}