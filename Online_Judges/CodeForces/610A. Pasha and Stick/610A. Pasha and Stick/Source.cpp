#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	if (n % 2 != 0)cout << "0" << endl; else cout << ((n - 2) / 4) << endl;
}
// anthor sol
/*
int n, count = 0;
cin >> n;
for (int i = 2; i <= n / 2; i += 2) {
	if ((n - i) % 2 == 0 && i != n - i)count++;
}cout << count << endl;
*/