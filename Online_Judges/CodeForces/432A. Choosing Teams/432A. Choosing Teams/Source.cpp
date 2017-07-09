#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n, k, count = 0, arr[20001];
	cin >> n >> k;
	for (int i = 0; i < n; i++)cin >> arr[i];
	sort(arr, arr + n);
	for (int i = 0; i < n; i++)if (arr[i]+k <= 5) count++;
	cout << count / 3 << endl;
}