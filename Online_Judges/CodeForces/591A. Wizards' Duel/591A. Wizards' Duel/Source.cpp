#include <iostream>
using namespace std;
int main() {
	double n, p, q;
	cin >> n >> p >> q;
	q += p; n = (n / q)*p * 2; cout << n / 2.0 << endl;
}