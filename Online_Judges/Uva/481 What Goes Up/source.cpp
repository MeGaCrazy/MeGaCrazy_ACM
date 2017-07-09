#include <stdio.h>
#include <stack>
#include <algorithm>
using namespace std;
const int N = 123567;
int arr[N], l_id[N], l[N], dp[N];
void print_array(int endlis, int a[], int p[]) {
	int x = endlis;
	stack<int> s;
	for (; p[x] >= 0; x = p[x])
		s.push(a[x]);
	printf("%d\n", a[x]);
	for (; !s.empty(); s.pop()) {
		printf("%d\n", s.top());
	}
}
int main() {
	int x, n = 0;
	freopen("in.txt", "r", stdin);
	while (scanf("%d", &x) == 1)
		arr[n++] = x;
	int lis = 0, endlis = 0;
	for (int i = 0; i < n; i++) {
		int pos = lower_bound(l_id, l_id + lis, arr[i]) - l_id;
		l_id[pos] = arr[i];
		l[pos] = i;
		dp[i] = pos > 0 ? l[pos - 1] : -1;
		if (pos + 1 >= lis) {
			lis = pos + 1;
			endlis = i;
		}
	}

	printf("%d\n-\n", lis);
	print_array(endlis, arr, dp);
}
