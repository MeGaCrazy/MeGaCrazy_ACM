#include <iostream>
#include <math.h>
using namespace std;
int main() {
	long long x,t,sum = 0, count = 0;
	cin >> t;
	while (t--) {
		cin >> x;
		sum = (x*(x + 1)) / 2;
		for (int i = 1; i <= x; i *= 2) {
			sum -= i*2;
		}cout << sum << endl;
	}
}