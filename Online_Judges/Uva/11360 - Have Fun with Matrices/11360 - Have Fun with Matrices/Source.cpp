#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
#define fill(x,y) memset(x,y,sizeof(x));
using namespace std;
int arr[11][11]; int temp[11][11];
void row(int a,int b,int n) {
	for (int i = 0; i < n; i++)swap(arr[a][i], arr[b][i]);
}
void col(int a, int b, int n) {
	for (int i = 0; i < n; i++)swap(arr[i][a], arr[i][b]);
}
void inc(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (++arr[i][j] == 10)arr[i][j] = 0;
			arr[i][j] %= 10;
		}
	}
}
void dec(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (--arr[i][j] == -1)arr[i][j] = 9;
			arr[i][j] %= 10;
		}
	}
}
void tranpose(int n) {
	int temp[11][11];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			temp[i][j] = arr[j][i];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = temp[i][j];
		}
	}

}
int main() {
	int t, n, m,a,b,w=1; string s;
	cin >> t;
	while (t--) {
		cin >> n;
		fill(arr, 0);
		for (int i = 0; i < n; i++) {
			cin >> s;
			for (int j = 0; j < n; j++) {
				arr[i][j] = (int)(s[j]-'0');
			}
		}
		cin >> m;
		for (int i = 0; i < m; i++) {
			cin >> s;
   			if (s == "transpose")tranpose(n);
			else if (s == "row") { cin >> a >> b; row(a-1, b-1, n); }
			else if (s == "col") { cin >> a >> b, col(a-1, b-1, n); }
			else if (s == "inc")inc(n);
			else if (s == "dec")dec(n);
		}
		cout << "Case #" << w++ << endl;
		for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					cout << arr[i][j];
				}cout << endl;
		}
		cout << endl;
		
	}
}