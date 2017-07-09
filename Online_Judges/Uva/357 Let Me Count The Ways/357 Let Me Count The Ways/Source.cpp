#include <stdio.h>
#include <string.h>
using namespace std;
const int N = 30005;
int arr[] = { 1,5,10,25,50 };
unsigned long long dp[N];
void generate() {
	memset(dp, 0, sizeof(dp));
	 dp[0] = 1;
	 for (int i = 0; i < 5; i++) {
		 for (int j = 1; j <= 30000; j++) {
			 if (j - arr[i] >= 0)dp[j] += dp[j - arr[i]];
		 }
	 }
}
int main() {
	int n;
	generate();
	freopen("intxt.txt", "r", stdin);
	while (scanf("%d", &n) != EOF) {
		if (dp[n] == 1) {
			printf("There is only %d way to produce %d cents change.\n",1, n);
		}
		else
			printf("There are %lld ways to produce %d cents change.\n", dp[n], n);
	}
}