#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main() {
	set<int>s;
	int n,a, k = 1, v[1001] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		s.insert(a);
		v[a]++; k = max(v[a], k);
	}cout << k << " " << s.size() << endl;
}