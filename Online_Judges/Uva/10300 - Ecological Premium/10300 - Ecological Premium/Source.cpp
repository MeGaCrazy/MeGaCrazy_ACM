#include <iostream>
using namespace std;
int main() {
	long long a, b, c, n, x, sum = 0;
	cin >> n;
	while (n--) {
		sum = 0;
		cin >> x;
		while (x--) {
			cin >> a >> b >> c;
			sum += a*c;
		}cout << sum << endl;
	}
}