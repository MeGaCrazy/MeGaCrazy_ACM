#include <iostream>
using namespace std;
int main() {
	int n, arr[10001];
	while (cin >> n, n) {
		bool up = false, down = false; int cnt = 0;
		for (int i = 0; i < n; i++)cin >> arr[i];
		if (arr[n - 1]<arr[0]) up = true;
		else down = true;
		arr[n] = arr[0];
		for (int i = 1; i <= n;i++) {
			if (arr[i-1] > arr[i]&&up == true)cnt++, down = true, up = false;
			else if (arr[i-1] <arr[i] && down == true)cnt++, up = true, down = false;
		}cout << cnt << endl;
	}
}