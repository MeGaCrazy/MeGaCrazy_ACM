#include <iostream>
using namespace std;
int main() {
	int r, c, cr[11] = { 0 },count=0, vcol[11] = {0},sum=0; char s;
	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> s;
			if (s == '.')cr[i]++,vcol[j]++;
		}
		if (cr[i] == c)sum += c, count++;
	}
	for (int j = 0; j < c; j++) { if (vcol[j] == r)sum += r - count; }
	cout << sum << endl;
}