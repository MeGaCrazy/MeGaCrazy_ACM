#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n, x, min = 999, imin, best = -1, imax;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (min > x) {imin = i;min = x;}
		if (best < x) {imax = i;best = x;}
	}--n; cout << max(max(n - imin, imin), max(n - imax, imax)) << endl;
}

