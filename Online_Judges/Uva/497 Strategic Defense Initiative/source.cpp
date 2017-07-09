#include <stdio.h>
#include <string.h>
#include <stack>
#include <algorithm>
using namespace std;
const int N = 1234567;
int arr[N], n, dp[N], last, len, pos[N], seq[N];
void LIS() {
	last = 0, len = 0;
	for (int i = 0; i<n; i++) {
		int index = lower_bound(seq, seq + len, arr[i]) - seq;
		seq[index] = arr[i];      
		pos[index] = i;
		dp[i] = index ? pos[index - 1] : -1;
		if (index + 1>len) {
			len = index + 1;
			last = i;
		}
	}
}
void print() {
	int x = last;
	stack<int> s;
	for (; dp[x] >= 0; x = dp[x])s.push(arr[x]);
	printf("%d\n", arr[x]);
	for (; !s.empty(); s.pop()) { printf("%d\n", s.top()); }
}
int main() {
	freopen("in.txt", "r", stdin);
	int t; char str[20];
	scanf("%d\n", &t);
	while (t--) {
		/// input ////
		//memset(dp, 0, sizeof(dp));
		//memset(pos, 0, sizeof(pos));
		//memset(seq, 0, sizeof(seq));
		n = 0;
		while(gets(str)&&strlen(str)){
		sscanf(str,"%d",&arr[n++]);
                }
		LIS();
		printf("Max hits: %d\n", len);
		print();
		if (t) { printf("\n"); }
	}
}