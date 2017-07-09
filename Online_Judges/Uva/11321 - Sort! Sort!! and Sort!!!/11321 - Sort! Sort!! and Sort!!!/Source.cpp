#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, m, a;
bool cmp(int a, int b) {
	int ma = a%m, mb = b%m;
	if (ma < mb)return true;
	else if (ma > mb)return false;

	if (a % 2 && b % 2)return a>b;
	if (a % 2 == 0 && b % 2 == 0)return a < b;
	return (a % 2); // lw el 2wl da even false so sort w lw el 2wl da odd stay =D its amazing function woOow
}

int main() {
	ios::sync_with_stdio(false);
	while (cin >> n >> m) {
		if (n == 0 && m == 0) { cout << "0 0\n"; break;}
		vector<int>v;
		for (int i = 0; i < n; i++) {
			cin >> a; v.push_back(a);
		}sort(v.begin(), v.end(), cmp);
		cout << n << ' ' << m << endl;
		for (int i = 0; i < n; i++) {
			cout << v[i]<< endl;
		}
	}
}