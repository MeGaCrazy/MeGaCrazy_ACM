#include <stdio.h>
#include <string.h>
using namespace std;
const int n = 11;
int arr[] = { 5,10,20,50,100,200,500,1000,2000,5000,10000 };
long long  dp[30005][11];
long long solve(int i, int value) {
	if (value == 0)return 1;
	if (value < 0 || i == n)return 0;
	if (dp[value][i] != -1)
		return dp[value][i];
	return dp[value][i] = solve(i + 1, value) + solve(i, value - arr[i]);
}
int main() {
	freopen("in.txt", "r", stdin);
	int a,b;
	while (scanf("%d.%d", &a,&b)) {
		int v = a * 100+b;
		if (!v)break;
		memset(dp, -1, sizeof(dp));
		printf("%6.2f%17lld\n", v/100.0, solve(0, v));
	}
}
/// more best ////
// 147 - Dollars
#include <iostream>

using namespace std;

const int coin[] = { 5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000 };
const int M = 11, N = 30000;

unsigned long long ans[N + 5];

void DP() {
	int i, j;
	for (i = 1; i <= N; i++) ans[i] = 0;
	ans[0] = 1;

	for (i = 0; i<M; i++)
		for (j = 0; j <= N; j++)
			if (j >= coin[i]) ans[j] += ans[j - coin[i]];
}

main() {
	DP();
	int a, b, n;
	while (scanf("%d.%d", &a, &b) != EOF) {
		n = a * 100 + b;
		if (!n) break;
		printf("%6.2f%17lld\n", n / 100.0, ans[n]);
		a = b = 0;
	}
}