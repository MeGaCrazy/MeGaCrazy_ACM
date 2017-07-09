#include <iostream>
using namespace std;
int main() {
	int n, m,a=1;
	cin >> n >> m;
	if (n != 1 && m <= n / 2)a = m + 1;
	else if (n != 1 && m > n / 2)a = m - 1;
	cout << a << endl;
}