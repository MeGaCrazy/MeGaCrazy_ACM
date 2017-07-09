#include <iostream>
#include <string.h>
#include <map>
#define fill(x,y) memset(x,y,sizeof(x));
using namespace std;
int main() {
	int n, a, b, arr[10001] = { 0 };
	while (cin >> n, n) {
		map<int, int>v;
		int flag = 0;
		fill(arr, 0);
		for (int i = 1; i <= n; i++) {
			cin >> a >> b; v[i + b]++;
			if ((i + b) < 1 || v[i + b] > 1 || (i+b)>n)flag = 1;
			else arr[i + b] = a;
		}if (flag)cout << -1 << endl;
		else {
			for (int i = 1; i <= n; i++) {
				cout << arr[i];
				if (i < n)cout << " ";
			}cout << endl;
		}
	}
}