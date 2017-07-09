#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n, a, b, arr[24][60] = { 0 }, min =-1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		arr[a][b]++;
	}
	for (int i = 0; i < 24; i++) {
		for (int j = 0; j < 60; j++) {
			if (arr[i][j] > min && arr[i][j]>1) {
				min = arr[i][j];
			}
		}
	}
	min == -1 ? cout << 1 << endl : cout << min << endl;
}