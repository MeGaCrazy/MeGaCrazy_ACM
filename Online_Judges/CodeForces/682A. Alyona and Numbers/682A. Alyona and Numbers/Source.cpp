#include <iostream>
using namespace std;
int main() {
	long long sum = 0;
	int n, m, arr1[5] = {0}, arr2[5] = { 0 };
	cin >> n >> m;
	for (int i = 1; i <= n; i++)arr1[i % 5]++;
	for (int i = 1; i <= m; i++)arr2[i % 5]++;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if ((i + j) % 5 == 0) {
				sum += 1ll*arr1[i] * arr2[j];
			}
		}
	}cout << sum << endl;
}