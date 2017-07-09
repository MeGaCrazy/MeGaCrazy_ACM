#include <stdio.h>
#include <string.h>
using namespace std;
const int n = 5;
int arr[] = { 1,5,10,25,50 };
int dp[7500];
void solve() {
	 memset(dp,0, sizeof(dp));
	 dp[0] = 1;
	 for (int i = 0; i < 5; i++) {
		 for (int j = 1; j <= 7500; j++) {
			 if (j - arr[i] >= 0)dp[j] += dp[j - arr[i]];
		 }
	 }
}
int main() {
	freopen("in.txt", "r", stdin);
	int x;
	solve();
	while (scanf("%d", &x) != EOF) {
		printf("%d\n",dp[x]);
	}
}