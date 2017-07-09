#include <iostream>
#include <utility>
#include <algorithm>
#include <string.h>
#define fill(x,y) memset(x,y,sizeof(x));
using namespace std;
int main() {
	int t, r, c, f, row[50005], col[50005];
	cin >> t;
	while (t--) {
		fill(row, 0); fill(col, 0);
		cin >> r >> c >> f;
		for (int i = 0; i < f; i++)cin >> row[i] >> col[i];
		sort(row, row + f);
		sort(col, col + f);
		if (f % 2 == 0)f /= 2, f--; else f = (f - 1) / 2;
		cout << "(Street: " << row[f] << ", Avenue: " << col[f] << ")" << endl;
	}
}