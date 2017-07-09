#include <iostream>
#include <string.h>
using namespace std;
#define fill(x,y) memset(x,y,sizeof(x));
int main() {
	int n, r, c, k, arr[110][110];
	while (cin >> n >> r >> c >> k, n&&r&&c&&k) {
		fill(arr, 0);
		for (int i = 1; i <= r; i++) {
			for (int j = 1; j <= c; j++)
				cin >> arr[i][j];
		}
		while (n--) {
			int temp[110][110] = { 0 };
			for (int i = 1; i <= r; i++) {
				for (int j = 1; j <= c; j++) {
					temp[i][j] = arr[i][j];
					if (i - 1 >= 1 && ((arr[i - 1][j] - arr[i][j] > 0 && arr[i - 1][j] - arr[i][j] % 2 == 1) || arr[i - 1][j] == 0 && arr[i][j] == n - 1))temp[i - 1][j] = arr[i][j];
					if (i + 1 <= r && ((arr[i + 1][j] - arr[i][j] > 0 && arr[i + 1][j] - arr[i][j] % 2 == 1) || arr[i + 1][j] == 0 && arr[i][j] == n - 1))temp[i+1][j] = arr[i][j];
					if (j - 1 >= 1 && ((arr[i][j-1] - arr[i][j] > 0 && arr[i][j-1] - arr[i][j] % 2 == 1) || arr[i][j-1] == 0 && arr[i][j] == n - 1))temp[i][j-1] = arr[i][j];
				    if (j + 1 <= c && ((arr[i][j + 1] - arr[i][j] > 0 && arr[i][j + 1] - arr[i][j] % 2 == 1) || arr[i][j + 1] == 0 && arr[i][j] == n - 1))temp[i][j + 1] = arr[i][j];
					
				    }
			    }
			for (int i = 1; i <= r; i++) {
				for (int j = 1; j <= c; j++)
					arr[i][j] = temp[i][j];
			}
			
		   }
		for (int i = 1; i <= r; cout << endl, i++) {
			for (int j = 1; j <= c; j++)
				cout << arr[i][j] << " ";
		}
	}
}