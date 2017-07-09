#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int r, x, y, a, b;
	cin >> r >> x >> y >> a >> b;
	cout << ceil(sqrt(pow(x - a, 2) + pow(y - b, 2)) / (r * 2)) << endl;
}