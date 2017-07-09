#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main() {
	int n,f,best= -100000000000,t, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> f >> t;
		if (t > k)best = max(best, (f - (t-k)));
		else best = max(best, f);
	}cout << best << endl;
}