#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;
typedef vector<int>vi;
typedef pair<int, vi>piv;
int d[30], g[30], w, t, n;
vi tmp;
piv memo[31][1005];
piv solve(int i, int rem, int gold,const vector<int>&v) {
	if (i == n || rem <= 0) {
		vi tmp2 = tmp;
		tmp.clear();
		return make_pair(gold, tmp2);
	}
	if (memo[i][rem].first != -1)
		return memo[i][rem];
	if ((2 * w*d[i]) + (w*d[i])>rem)
		memo[i][rem] = solve(i + 1, rem, gold,v);
	return memo[i][rem] = max(solve(i + 1, rem, gold,v), solve(i + 1, rem - d[i], g[i] + gold,tmp));
}
int main() {

	freopen("in.txt", "r", stdin);
	while (scanf("%d%d", &t, &w) != EOF) {
		memset(memo, -1, sizeof(memo));
		scanf("%d", &n);
		for (int i = 0; i<n; i++) {
			scanf("%d %d", &d[i], &g[i]);
		}
		piv ans = solve(0, t, 0,tmp);
		printf("%d\n%d\n", ans.first, ans.second.size());
		int length = ans.second.size();
		for (int i = 0; i<length; i++) {
			printf("%d %d\n", d[ans.second[i]], g[ans.second[i]]);
		}
	}
}