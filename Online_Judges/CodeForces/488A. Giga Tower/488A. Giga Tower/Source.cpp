#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main() {
	// unsolved
	int n, temp, v[10] = { 0 }; cin >> n; temp = abs(n);
	while (temp) { v[temp % 10]++; temp /= 10; }
	if (v[8] > 1 || v[8] == 1 && abs(n) % 10 != 8) { cout << 1 << endl; return 0; }
	else if (v[8] == 1 && n % 10 == 8 && n>0){cout << 10 << endl; return 0;}
	if (abs(n) <= 8) cout << 8 -n << endl; else cout << min((abs(8 - abs(n) % 10)),abs(n)-8) << endl;
}