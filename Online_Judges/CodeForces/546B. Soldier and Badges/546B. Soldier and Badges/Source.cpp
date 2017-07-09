#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n, arr[3001], count = 0;
	cin >> n;
	for (int i = 0; i < n; i++) { cin >> arr[i]; }
	sort(arr, arr + n);
	for (int i = 0; i < n-1; i++) {
		if (arr[i] >= arr[i + 1]) {
			int temp = arr[i] - arr[i + 1];
			count += temp + 1;
			arr[i + 1] += temp+1;
		}
	}cout << count << endl;
}