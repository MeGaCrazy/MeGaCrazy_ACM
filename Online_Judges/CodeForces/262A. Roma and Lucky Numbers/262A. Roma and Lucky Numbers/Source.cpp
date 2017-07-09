#include <iostream>
using namespace std;
int main() {
	int n, k, a, ans = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a; int count = 0;
			while (a) {
				if (a % 10 == 7 || a % 10 == 4)count++;a /= 10;
			}if (!(count > k))ans++;
	}cout << ans << endl;
}