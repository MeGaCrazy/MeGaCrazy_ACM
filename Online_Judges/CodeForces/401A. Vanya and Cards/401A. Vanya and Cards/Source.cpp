#include <iostream>
using namespace std;
int main() {
	int n, x, a, sum = 0;
	cin >> n >> x;
	for (int i = 0; i < n; i++) {cin >> a; sum += a;}
	for (int i = 0; i <= 1000; i++) { if (abs(sum) - abs(i*x) <= 0) {cout << i << endl; return 0;}}
}