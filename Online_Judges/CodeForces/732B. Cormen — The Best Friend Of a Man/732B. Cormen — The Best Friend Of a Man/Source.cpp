#include <iostream>
using namespace std;
int main() {
	int n, k, arr[501], count = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++)cin >> arr[i];
	for (int i = 1; i < n; i++) {
		int temp = (k-(arr[i] + arr[i - 1]));
		if (temp > 0)arr[i] += temp, count += temp;
	}cout << count << endl;
	for (int i = 0; i < n; i++)cout << arr[i] << " ";
}