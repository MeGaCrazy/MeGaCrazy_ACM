#include <iostream>
using namespace std;
int main() {
	// unsolved 
	int v[2] = {0}, n, a;
	cin >> n;
	for (int i = 0; i < n; i++) {cin >> a; v[a]++;}
	if (v[1] == 0)cout << 0 << endl;
	else if (v[1] == 1 || v[0] <= 1)cout << 1 << endl;
	else if (v[1] >= v[0])cout << v[0] * 2 << endl; else cout << v[1]*2 << endl;
}