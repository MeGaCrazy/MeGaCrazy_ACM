#include <iostream>
using namespace std;
int main() {
	int n,sum = 0, r[101] = { 0 }, col[101] = { 0 }; char x;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> x;
			if (x == 'C')r[i]++, col[j]++;
		}
	}
	for (int i = 0; i < n; i++) {
		if (r[i] > 0)sum += (r[i] * (r[i] - 1)) / 2;
		if (col[i] > 0)sum += (col[i] * (col[i] - 1)) / 2;
	}cout << sum << endl;
}