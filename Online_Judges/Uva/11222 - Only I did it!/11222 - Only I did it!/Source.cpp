#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
using namespace std;
int main() {
	int t, i = 1;
	cin >> t;
	while (t--) {
		printf("Case #%d:\n", i++);
		int  A[3], arr[3][10001], m[10001] = {};
		for (int i = 0; i < 3; i++) {
			cin >> A[i];
			for (int j = 0; j < A[i]; j++) {
				cin >> arr[i][j];
				m[arr[i][j]]++;
			}
			sort(arr[i], arr[i] + A[i]);
		}
		int solved[3], max = 0;
		for (int i = 0; i < 3; i++) {
			int temp = 0;
			for (int j = 0; j < A[i]; j++) {
				if (m[arr[i][j]] == 1)temp++;
				if (temp > max)max = temp;
				solved[i] = temp;
			}
		}
		for (int i = 0; i < 3; i++) {
			if (solved[i] == max) {
				cout << i + 1 << " " << solved[i];
				for (int j = 0; j < A[i]; j++) {
					if (m[arr[i][j]] == 1) {
						cout << " " << arr[i][j];
					}
				}puts("");
			}
		}
	}
}