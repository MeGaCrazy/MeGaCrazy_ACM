#include <iostream>
using namespace std;
int main() {
	int n, x, sum=0, v[100] = { 0 }; cin >> n;
	for (int i = 0; i < n; i++) {
		int count = 0;
		for (int j  = 0; j < n; j++) {
			cin >> x;
			if (x != 1 && x != 3)count++;
		}
		if (count == n) {sum++;v[i]++;}
	}
	cout << sum << endl;
	for (int i = 0; i < n; i++) { if (v[i] > 0)cout << i + 1 << " "; }
}