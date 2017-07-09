#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, sum = 0, k = 0, l = 0;
	cin >> n;
	int a;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		if (a == 1) {
			++l;
			if (sum > 0)--sum;
		}
		else ++sum;
		if (sum > k)k = sum;
	}
	if (k == 0)cout << l - 1;
	else cout << k + l;
}