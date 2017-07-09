#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n, m,count=0;
	cin >> n >> m;
	if (m <= n) { cout << n - m << endl; return 0; }
	while (n<m) {
		m % 2 == 0 ? m /= 2 : m++; count++;
	}cout << count+(n-m) << endl;
}

