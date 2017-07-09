#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	int n, m, c, r, t,i=1; string s1, s2;
	cin >> t;
	while (t--) {
		s2 = ""; int big = -1, v[26] = { 0 }, numbers=0, count = 0;
		cin >> r >> c >> m >> n;
		for (int i = 0; i < r; i++) {
			cin >> s1;
			s2 += s1;
		}sort(s2.begin(), s2.end());
		int length = r*c;
		for (int i = 0; i < length; i++) {
			v[s2[i] - 'A']++;
			big = max(v[s2[i] - 'A'], big);
		}
		for (int i = 0; i < 26; i++)if (v[i] == big)count++;
		cout << "Case " << i++ << ": " << (big*count*m) + (n*(length- big*count)) << endl;
	}
}