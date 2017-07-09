#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n, a, k = 9999999999;
	long long sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a & 1)k = min(a, k);
		sum += a;
	}
	if (sum & 1)sum -= k;
	cout << sum << endl;
}