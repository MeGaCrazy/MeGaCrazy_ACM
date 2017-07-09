#include <iostream>
using namespace std;
int main() {
	int w = 1, t, n; char b; long long int arr[101][101] = { 0 };
	cin >> t;
	while (t--) {
		int flag = 0, stop = 0;
		cin >> b >> b >> n;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> arr[i][j];
				if (arr[i][j] < 0)flag = 1;
			}
		}
		if (flag == 0) {
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					if (i == n / 2 && j == n / 2) { stop = 1; break; }
					if (arr[i][j] != arr[n - 1 - i][n - 1 - j])flag = 1;
				}
				if (stop == 1)break;
			}
		}
		cout << "Test #" << w++ << ": ";
		flag == 0 ? cout << "Symmetric.\n" : cout << "Non-symmetric.\n";
	}
}