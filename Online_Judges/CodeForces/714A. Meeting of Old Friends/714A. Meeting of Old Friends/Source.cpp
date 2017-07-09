#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	long long a, b, c, d, k;
	cin >> a >> b >> c >> d >> k, a = max(a, c), b = min(b, d);
	cout << max(b - a + (k > b || k < a), 0LL) << endl;
}