#include <iostream>
using namespace std;


int main() {
	int number = 0;
	int count = 0;
	int k, l, m, n;
	long d;
	cin >> k >> l >> m >> n >> d;
	number = d;
	for (int i = 1; i <= d; i++) {
		if (i%k == 0 || i%l == 0 || i%m == 0 || i%n == 0) {
			count++;
		}
	}
	d = d - count;
	number = number - d;
	cout << number << endl;






}