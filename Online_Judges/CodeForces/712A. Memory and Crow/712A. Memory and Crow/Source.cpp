#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n, arr[100001];
	cin >> n;
	for (int i = 0; i < n; i++)cin >> arr[i];
	for (int i = 0; i < n; i++) {
		if (i == n - 1)cout << arr[i] << endl;
		else cout << arr[i] + arr[i + 1] << " ";
	}
}