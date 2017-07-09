#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
char arr[51][51];
int compare(int i, int j) {
	char s[5] = { arr[i][j],arr[i+1][j],arr[i][j+1],arr[i + 1][j + 1] };
	sort(s, s + 4);
	return strcmp(s,"acef") == 0;
}
int main() {
	int n, m, sum = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < m-1; j++) {
			sum += compare(i, j);
		}
	}cout << sum << endl;
}