#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int a, b, x, y, v, n;
	double min =100000;
	cin >> a >> b >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> y >> v;
		x = abs(x-a); y = abs(y-b);
		if (min > (sqrt(pow(x, 2) + pow(y, 2)) / v))min = (sqrt(pow(x, 2) + pow(y, 2)) / v);
	}min = min * 2;
	printf("%.20f \n", min / 2.0);
}