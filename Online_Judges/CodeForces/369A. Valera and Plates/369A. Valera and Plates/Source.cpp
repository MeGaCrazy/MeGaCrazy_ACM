#include <iostream>
using namespace std;
int main() {
	int n, m, k, x, count = 0;
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x == 1 && m > 0)m--;
		else if (x == 2 && k > 0)k--;
		else if (x == 2 && m > 0)m--;
		else count++;
	}cout << count << endl;
}