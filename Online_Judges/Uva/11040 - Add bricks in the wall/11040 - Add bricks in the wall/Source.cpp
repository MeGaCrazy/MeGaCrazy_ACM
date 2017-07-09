#include <iostream>
#include <string.h>
#define fill(x,y) memset(x,y,sizeof(x));
using namespace std;
int main() {
	int n, arr[12][12] = { 0 };
	cin >> n;
	while (n--) {
		fill(arr, 0);
		for (int i = 0; i < 9; i+=2) {
			for (int j = 0; j <= i; j += 2) {
				cin >> arr[i][j];
			}
		}
		int a, b, c;
		for (int i = 8; i > 0; i -= 2) {
			for (int j = 0; j < i; j+=2) {
				a = arr[i - 2][j];
				b = arr[i][j];
				c = arr[i][j + 2];
				arr[i][j + 1] = (a - b - c) / 2;
				arr[i - 1][j] = arr[i][j] + arr[i][j + 1];
				arr[i - 1][j + 1] = arr[i][j + 1] + arr[i][j + 2];
			}
		}
		for (int i = 0; i < 9; cout<<endl,i ++) {
			for (int j = 0; j <= i; j++) {
				if (j)cout << ' ';
				cout << arr[i][j];
				
			}
		}
	}

}