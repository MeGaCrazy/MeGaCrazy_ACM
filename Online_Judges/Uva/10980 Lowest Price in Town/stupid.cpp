#include <stdio.h>
#include <iostream>
#include <string.h>
#include <utility>
#include <string>
#include <sstream>
using namespace std;
#define OO 9999999
#define Min(a, b)   ((a)<=(b))? (a):(b)
typedef pair<int, int>ii;
int dp[107][27], n;
ii arr[27];
int solve(int k, int pos) {
	if (k <= 0)return 0;
	if (pos == n+1)return OO;
	int &ret = dp[k][pos];
	if (ret != -1)
		return ret;
	ret = OO;
	int p1 = solve(k, pos + 1);
	int p2 = solve(k - arr[pos].first, pos)+arr[pos].second;
	return ret=Min(ret,Min(p1,p2));
}
int main() {
	freopen("in.txt", "r", stdin);
	int a1, a2, cas = 1;
	while (scanf("%d.%d %d", &a1, &a2, &n) != EOF) {
		int value = a1 * 100 + a2;
		arr[0] = make_pair(1, value);
		int dis;
		for (int i = 1; i<=n; i++) {
			scanf("%d %d.%d", &dis, &a1, &a2);
			value = a1 * 100 + a2;
			arr[i] = make_pair(dis, value);
		}
		getchar();
		printf("Case %d:\n", cas++);
               	memset(dp, -1, sizeof(dp));
		string s;
		getline(cin, s);
		istringstream in(s);
		while (in >> a1) {
			int ans = solve(a1, 0);
			printf("Buy %d for $%.2lf\n", a1, ans /100.0);
		}
	}
}