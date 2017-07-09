#include <iostream>
using namespace std;
int main() {
	int b, c, n, a, sum1 = 0, sum2 = 0, sum3 = 0;
	cin >> n;
	for (int i = 0; i < n; i++) { cin >> a; sum1 += a;}
	for (int i = 0; i < n - 1; i++) { cin >> b; sum2 += b; }
	for (int i = 0; i < n - 2; i++) { cin >> c; sum3 += c; }
	cout << sum1 - sum2 << "\n" << sum2 - sum3 << endl;
}