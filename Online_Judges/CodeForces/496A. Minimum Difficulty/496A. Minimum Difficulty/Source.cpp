#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n, arr[103], k = -1, m = 99999;
	cin >> n;
	for (int i = 0; i < n; i++) { cin >> arr[i]; }
	for (int i = 0; i < n - 1; i++) { k = max(k, arr[i + 1] - arr[i]); }
	for (int i = 0; i < n - 2; i++) { m = min(m, arr[i + 2] - arr[i]); }
	cout << max(m, k) << endl;
}