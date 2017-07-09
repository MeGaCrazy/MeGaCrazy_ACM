#include <stdio.h>
using namespace std;
int main() {
	int arr[1001] = { 0 };
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
		int ans = 1;
		for (int i = 0; i < n; i++) {
			int start = i - 1; int cnt = 1;
			while (start >= 0 && arr[i] >= arr[start] && arr[start + 1] >= arr[start]) { cnt++, start--; }
			start = i + 1;
			while (start < n && arr[i] >= arr[start] && arr[start - 1] >= arr[start]) { cnt++, start++; }
			if (ans < cnt)ans = cnt;
		}printf("%d", ans);
}