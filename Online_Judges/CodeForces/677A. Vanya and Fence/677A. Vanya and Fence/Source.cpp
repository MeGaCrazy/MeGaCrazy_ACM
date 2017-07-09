#include <iostream>
using namespace std;

int main() {
	int sum = 0, n, h, a;
	cin >> n >> h;
	for (int i = 1; i <= n; i++) {cin >> a;if (a <= h)sum++;else sum += 2;}
	cout << sum << endl;
}