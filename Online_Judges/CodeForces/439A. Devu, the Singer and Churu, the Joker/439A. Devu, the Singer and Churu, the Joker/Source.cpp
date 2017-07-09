#include <iostream>
using namespace std;
int main() {
	int n, d, a, sum = 0, sumstop = 0;
	cin >> n >> d;
	for (int i = 0; i < n; i++) {cin >> a; sum += a;
	i != n - 1?sumstop += (a + 10):  sumstop += a;
	}
	int temp = d - sum;
	if (sumstop > d) { cout << -1 << endl; }
	else
	{	temp >= 5 ? cout << temp / 5 << endl : cout << 0 << endl;} 
}