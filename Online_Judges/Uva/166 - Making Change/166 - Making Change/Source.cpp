#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;
int v[] = { 5,10,20,50,100,200 };
int dp[1005], arr[6];
void gen() {
	for (int i = 0; i < 1000; i++)dp[i] = 99999;
	dp[0] = 0;
	for (int i = 0; i < 6; i++) {
		for (int j = v[i]; j <= 1000; j++) {
			dp[j] = min(dp[j], 1 + dp[j - v[i]]);
		}
	}
}
int solve(int i, int value) {
	if (value > 500||value <-500)return 999999;
	if (value <= 0 && i < 0)
		return dp[-value];
	else if (i < 0)return 999999;
	if (!arr[i])
		return solve(i - 1, value);
	else {
		arr[i]--;
		int a = solve(i, value - v[i]);
		arr[i]++;
		int b = solve(i - 1, value);
		return min(a + 1, b);	
	}
}
int main() {
	freopen("in.txt", "r", stdin);
	gen();
	scanf("%d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5]);
	while (arr[0] || arr[1] || arr[2] || arr[3] || arr[4] || arr[5]) {
		int a, b,n;
		scanf("%d.%d", &a, &b);
		n = a * 100 + b;
		printf("%3d\n", solve(5, n));
	scanf("%d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5]);
	}
}