#include <iostream>
#include <set>
using namespace std;
int main() {
	set<int>s;
	int n, a; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		while (a % 2 == 0)a /= 2;
		while (a % 3 == 0)a /= 3;
		s.insert(a);
	}s.size() == 1 ? cout << "Yes" << endl : cout << "No" << endl;
}