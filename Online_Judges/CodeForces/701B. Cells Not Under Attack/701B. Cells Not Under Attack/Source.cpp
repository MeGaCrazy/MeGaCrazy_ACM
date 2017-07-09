#include <iostream>
#include <set>
using namespace std;
int main() {
	long long n, m, x, y;
	set<int>a, b;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		a.insert(x), b.insert(y);
		cout << (n - a.size())*(n - b.size())<<" ";
	}

}