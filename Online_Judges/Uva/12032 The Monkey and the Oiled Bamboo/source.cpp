#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
const int N = 1234567;
int arr[N],n;
bool is_possible(int tmp) {

	if (tmp < arr[0])
		return false;
	if (tmp == arr[0])
		tmp--;

	for (int i = 0; i < n - 1; i++) {
		if (tmp < (arr[i + 1] - arr[i])) {
			return false;

		}
		if (tmp == (arr[i + 1] - arr[i]))
			tmp--;
	}
}
int binarySearch(int lo, int hi) {
	while (lo < hi) {
		int mid = lo + (hi - lo) / 2;
		if (is_possible(mid))
			hi = mid;
		else
			lo = mid + 1;
	}
	if (is_possible(lo))
		return lo;
	else
		return hi;
}
int main() {
	int t, cas = 1;
	freopen("in.txt", "r", stdin);
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		memset(arr, 0, sizeof(arr));
		for (int i = 0; i < n; i++)
			scanf("%d", &arr[i]);

		int lo = 0, hi =1234567;
		int ans = binarySearch(0, hi);
		printf("Case %d: %d\n", cas++, ans);
	}

}
