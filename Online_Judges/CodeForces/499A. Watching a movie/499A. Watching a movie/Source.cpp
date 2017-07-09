#include <iostream>
using namespace std;
int main() {
	int n, x, i = 0, j = 1, a, b, sum = 0;
	for (cin >> n >> x; i < n; i++) {
		cin >> a >> b;
		sum += (a - j) / x; j = b + 1;
	}cout << (j - 1) - (sum)*x << endl;
}