#include <iostream>
using namespace std;
int main() {
	int v[51] = { 0 }, n, t, a, b, count = 0;
	cin >> n >> t;
	for (int i = 0; i < n; i++) {
		cin >> b;
		for (int j = 0; j < b; j++) {
			cin >> a;
			if (a < t) {v[i + 1]++;}
		}
	}for (int i = 1; i <= n; i++) { if (v[i])count++; }cout << count << endl;
	for (int i = 1; i <=n; i++) {
		if (v[i])cout << i <<" ";
	}cout << endl;
}