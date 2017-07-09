#include <iostream>
using namespace std;
int main() {
	int n, m, a, b, count = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a >> b;
			if (a || b)count++;
		}
	}cout << count << endl;
}