#include <iostream>
#include <set>
using namespace std;
int main() {
	int n, a, m, b; set<int>s;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> b;
		for (int j = 0; j < b; j++) {
			cin >> a;
			s.insert(a);
		}
	}s.size() == m ? cout << "YES" << endl : cout << "NO" << endl;
}