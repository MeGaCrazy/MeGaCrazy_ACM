#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
bool cmp(string a, string b) {
	return (a + b) > (b + a);
}
int main() {
	ios::sync_with_stdio(false);
	int n; string s;
	while (cin>>n,n) {
		vector <string>v;
		for (int i = 0; i < n; i++) {
			cin >> s;
			v.push_back(s);
		}
		sort(v.begin(), v.end(), cmp);
		for (int i = 0; i < n; i++) {
			cout << v[i];
		}cout << endl;
	}
}