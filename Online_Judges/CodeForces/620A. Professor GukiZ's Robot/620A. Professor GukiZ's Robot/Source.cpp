#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main() {
	int x, y, a, b;
	cin >> x >> y >> a >> b;
	cout << max(abs(x - a), abs(y - b));
}