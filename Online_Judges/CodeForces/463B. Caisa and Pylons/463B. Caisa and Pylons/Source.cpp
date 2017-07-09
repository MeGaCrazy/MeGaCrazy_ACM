#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main() {
	int n, x, best = -1; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		best = max(best, x);
	}cout << best << endl;
}