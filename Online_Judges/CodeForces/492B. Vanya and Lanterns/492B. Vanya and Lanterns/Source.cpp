#include <algorithm>
#include <iostream>
using namespace std;
int main() {
	int n,m, l, arr[1001];
	cin >> n >> l;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	m = max(arr[0], l - arr[n - 1])*2;
	for (int i = 1; i < n; i++) {
		m = max(m,arr[i] - arr[i - 1]);
	}
	printf("%.9lf \n", m / 2.0);

}