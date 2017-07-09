#include <iostream>
using namespace std;
int main() {
	int x[1000] = {0}, n, m, a, b = -1, c, s = 0;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a;
			if (a > b) {
				b = a;
				c = j+1;
			}
		}
		x[c]++;
		b = -1;
	}
	b = -1;
	for (int i = 0; i < 101; i++) {
		if (x[i] > b) {
			b = x[i];
			s = i;
		}
	}
	cout << s << endl;


}

