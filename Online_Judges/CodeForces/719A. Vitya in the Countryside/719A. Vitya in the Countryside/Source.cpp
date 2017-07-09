#include <iostream>
using namespace std;
int main() {
	int n, a, b; cin >> n;
	for (int i = 0; i < n - 1; i++) { cin >> a; }cin >> b;
	if (b == 15)cout << "DOWN" << endl;
	else if (b == 0)cout << "UP" << endl;
	else if (n == 1)cout << -1 << endl;
	else a > b? cout << "DOWN" << endl : cout << "UP" << endl;
	
}