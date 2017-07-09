#include <iostream>
using namespace std;

int main() {
	long long n, m, y = 1, x, sum = 0;
	cin >> n >> m;
	while (m) {
		cin >> x;
		sum += (x - y + n) % n;
		y = x;
		m--;
	}
	cout << sum << endl;
	return 0;





}