#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int n, m, b, count = 0;
	cin >> n >> m;
	for (int a = 0; a <= n; a++) {
		b = (n - pow(a, 2));
		if (b < 0)continue;
		if (pow(b, 2) + a == m)count++;
	}cout << count << endl;
}